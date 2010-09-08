// synch.cc 
//	Routines for synchronizing threads.  Three kinds of
//	synchronization routines are defined here: semaphores, locks 
//   	and condition variables (the implementation of the last two
//	are left to the reader).
//
// Any implementation of a synchronization routine needs some
// primitive atomic operation.  We assume Nachos is running on
// a uniprocessor, and thus atomicity can be provided by
// turning off interrupts.  While interrupts are disabled, no
// context switch can occur, and thus the current thread is guaranteed
// to hold the CPU throughout, until interrupts are reenabled.
//
// Because some of these routines might be called with interrupts
// already disabled (Semaphore::V for one), instead of turning
// on interrupts at the end of the atomic operation, we always simply
// re-set the interrupt state back to its original value (whether
// that be disabled or enabled).
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "synch.h"
#include "system.h"

//----------------------------------------------------------------------
// Semaphore::Semaphore
// 	Initialize a semaphore, so that it can be used for synchronization.
//
//	"debugName" is an arbitrary name, useful for debugging.
//	"initialValue" is the initial value of the semaphore.
//----------------------------------------------------------------------

Semaphore::Semaphore(char* debugName, int initialValue)
{
    name = debugName;
    value = initialValue;
    queue = new List;
}

//----------------------------------------------------------------------
// Semaphore::Semaphore
// 	De-allocate semaphore, when no longer needed.  Assume no one
//	is still waiting on the semaphore!
//----------------------------------------------------------------------

Semaphore::~Semaphore()
{
    delete queue;
}

//----------------------------------------------------------------------
// Semaphore::P
// 	Wait until semaphore value > 0, then decrement.  Checking the
//	value and decrementing must be done atomically, so we
//	need to disable interrupts before checking the value.
//
//	Note that Thread::Sleep assumes that interrupts are disabled
//	when it is called.
//----------------------------------------------------------------------

void
Semaphore::P()
{
    IntStatus oldLevel = interrupt->SetLevel(IntOff);	// disable interrupts
    
    while (value == 0) { 			// semaphore not available
	queue->Append((void *)currentThread);	// so go to sleep
	currentThread->Sleep();
    } 
    value--; 					// semaphore available, 
						// consume its value
    
    (void) interrupt->SetLevel(oldLevel);	// re-enable interrupts
}

//----------------------------------------------------------------------
// Semaphore::V
// 	Increment semaphore value, waking up a waiter if necessary.
//	As with P(), this operation must be atomic, so we need to disable
//	interrupts.  Scheduler::ReadyToRun() assumes that threads
//	are disabled when it is called.
//----------------------------------------------------------------------

void
Semaphore::V()
{
    Thread *thread;
    IntStatus oldLevel = interrupt->SetLevel(IntOff);

    thread = (Thread *)queue->Remove();
    if (thread != NULL)	   // make thread ready, consuming the V immediately
	scheduler->ReadyToRun(thread);
    value++;
    (void) interrupt->SetLevel(oldLevel);
}

// Dummy functions -- so we can compile our later assignments 
// Note -- without a correct implementation of Condition::Wait(), 
// the test case in the network assignment won't work!
Lock::Lock(char* debugName)
{
	name = debugName;
	waitQueue = new List;
	lockAvailable = true;  // Initially lock is available or free
	lockThread = new Thread("lockThread");
}

// Lock class destructor
Lock::~Lock() 
{
	// Delete the List object & free memory acquired by it
	delete waitQueue;
}

// Lock class method to acuire the lock & keeping other off from executing the critical section
void Lock::Acquire() 
{
	// Acquisition of Lock need to be done atomically. So, disable the interrupts.
	// Save the old interrupt status to be restored later while restoting the interrupt.
	IntStatus oldIntLevel = interrupt->SetLevel(IntOff);
	
	// Before acquiring the lock check whether it is already acquired by same thread or not.
	// This happens when multiple function are called & a "rarely" called function may call
	// acquire on a previously acquired lock. In such case as lock is BUSY the calling thread 
	// itself has acquired it & now waiting for the same in wait queue i.e sleeping. As owner
	// of the lock itself is waiting for the lock again, no one is going to wake it up & hence 
	// application will be shut-down
	if (isHeldByCurrentThread())
	{
		// As lock is already with this thread then simply restore the intrupts & come out
		(void) interrupt->SetLevel(oldIntLevel);
		
		// Debug message
		DEBUG('u', "%s : Thread already has the lock : %s. No need to acquire it again\n", currentThread->getName(), name);
		return;
	}
	
	// If thread doesn't own the lock & lock is avaialable
	if (lockAvailable)
	{
		// As lock will be aquired now, make it busy
		lockAvailable = false;
		
		// Acquire the lock by making the calling thread as lock owner
		lockThread = currentThread;
		
		// Debug message
		DEBUG('u', "%s : Thread has acquired the lock : %s.\n", currentThread->getName(), name);
	} else	// If lock is not free & is owned by some other thread
	{
		// Debug Message
		DEBUG('u', "%s : Lock is not available.  Due to this %s : Thread is put on sleep.\n", name, currentThread->getName());

		// The calling thread has to wait for lock to get free
		// This will be done by adding the thread to wait queue &
		// making it to sleep. The lock should always be added to 
		// waitqueue first & then put on sleep as once slept it will do
		// nothing & will not be waken up if not in waitqueue;
		waitQueue -> Append((void *)currentThread);
		currentThread->Sleep();
		
		
		/////
		//Scott---- is the thread supposed restore interrupts first?
		/////
	}
	
	// Restore the interrupts after getting the lock
	// As we have to give CPU back to scheduler.
	(void) interrupt->SetLevel(oldIntLevel);
}
	
void Lock::Release() 
{
	// Releasing of Lock need to be done atomically. So, disable the interrupts.
	// Save the old interrupt status to be restored later while restoting the interrupt.
	IntStatus oldIntLevel = interrupt->SetLevel(IntOff);
	
	// Check whether the thread which has called "Release" is lock owner or not
	// If some thread is trying to cheat then simple print an error message & return
	if (!isHeldByCurrentThread())
	{
		printf("ERROR: %s : Thread is not the owner of lock. %s : Lock can't be released.\n", currentThread->getName(), name);
		
		// As no release has happend, restore the interrupts
		(void) interrupt->SetLevel(oldIntLevel);
		
		return;
	}
	
	// Any release operation can happen only when any thread is waiting for lock
	// Check whether any thread is waiting for the lock or not
	if (!(waitQueue->IsEmpty()))
	{
		// Create a local thread pointer variable to hold thread pointer returned by waitqueue
		Thread *releaseThread;
		
		// Wake up the thread from the front position of the wait queue.
		releaseThread = (Thread *)waitQueue->Remove();
		
		// Add this thread to the ReadyQueue
		scheduler->ReadyToRun(releaseThread);
		
		// Make this thread as the present owner
		lockThread = releaseThread;

		// Print a debug message
		DEBUG('u', "%s : Thread was the first entry in Lock wait queue. Giving lock to it.\n", releaseThread->getName());

	} else	// If no thread is waiting in wait queue, simple release the lock & make it available
	{
		// Make lock available
		lockAvailable = true;
		
		// Clear the ownership of lock
		lockThread = NULL;
	}

	// Restore the interrupts after releaseing the lock
	// As we have to give CPU back to scheduler.
	(void) interrupt->SetLevel(oldIntLevel);
}	


// Function to info on whether current thread has acquired the the lock or not 
bool Lock::isHeldByCurrentThread()
{
	// Check if "I am the owner of lock" i.e currentThread is same as "ME"
	// then return true else false
	return (lockThread == currentThread ? true:false);
}


// Constructor for condition class 
Condition::Condition(char* debugName)
{
	name = debugName;
	cvWaitQueue = new List;
	cvLock = new Lock("cvLock");
}

// Desctructor for condition class
Condition::~Condition() 
{
	delete cvWaitQueue;
}

// Function Wait to make threads go to Sleep waiting for a condition to become true
void Condition::Wait(Lock* conditionLock)
{ 
	// Waiting of Lock need to be done atomically. So, disable the interrupts.
	// Save the old interrupt status to be restored later while restoting the interrupt.
	IntStatus oldIntLevel = interrupt->SetLevel(IntOff);

	// If someone is passing a Null simply return
	if (conditionLock == NULL)
	{
		// Print a message & return
		printf("NULL has been passed to thread->wait(). Invalid thread passed for waiting.\n");

		// Restore the interrupts
		(void) interrupt->SetLevel(oldIntLevel);

		return;
	}

	// We have to keep track of the locks being used with each condition variable
	// as whenever a lock is released we have to identify the CV associated with a lock
	// so that only locks related to this CV can acquire it.
	// We need to check this only for the first time when a lock is released. This can be
	// checkd by simple checking the wait queue of the lock. If it is empty this is the
	// FIRST-WAITER
	if (cvWaitQueue->IsEmpty())
	{
		// This is the first waiter
		// Save the lock pointer in the condition class
		cvLock = conditionLock;
	}

	// Release the lock & exit from the monitor
	conditionLock->Release();

	// Put the present thread in the condition wait queue
	cvWaitQueue->Append(currentThread);

	// put the current thread on sleep
	currentThread->Sleep();

	// Re-acquire the lock when thread will be signalled to wake-up
	// By re-acquiring the lock the thread is entering the monitor again
	conditionLock->Acquire();

	// Restore the interrupts & return
	(void) interrupt->SetLevel(oldIntLevel);
}

// Function to implement signal functioanlaity to wake up any sleeping thread
void Condition::Signal(Lock* conditionLock) 
{
	// Signalling of Lock need to be done atomically. So, disable the interrupts.
	// Save the old interrupt status to be restored later while restoting the interrupt.
	IntStatus oldIntLevel = interrupt->SetLevel(IntOff);

	// If there is no-pne in wait queue i.e  no one waiting restore interrupts & return
	if (cvWaitQueue->IsEmpty())
	{
		// Restore interrupts
		(void) interrupt->SetLevel(oldIntLevel);

		// Print a debug message
		DEBUG('u', "Wait queue for the monitor is empty & nothing to wake-up by signalling.\n");

		return;
	}

	// Check whether the signaler's lock matches with the lock given-up by waiter's or not
	// if it doesn't matches then this is an error. Simply print an error message, restore interrupt
	// and return
	if (!(cvLock == conditionLock))
	{
		// Print an error message as lock doesn't match & return
		printf("ERROR LOCK MISMATCH: Signalled for lock : %s by thread : %s , while waiting for lock : %s\n", conditionLock->getName(), currentThread->getName(),cvLock->getName()); 

		// Restore interrupts
		(void) interrupt->SetLevel(oldIntLevel);

		return;
	}

	// Create a thread pointer to carry the pointer to waken-up thread
	Thread *thread;

	// Wake up 1 thread from sleep by taking it out of the wait queue
	thread = (Thread *)cvWaitQueue->Remove();

	// Put the waken-up thread in ReadyQueue
	scheduler->ReadyToRun(thread);

	// If waken-up thread was the last or only one in wait queue
	// then wait queue is empty now & no one is holding the lock
	// or no thread is associate with this lock anymore.
	if (cvWaitQueue->IsEmpty())
	{
		// Free the lock
		cvLock = NULL;
	}

	// Restore the interrupts
	(void) interrupt->SetLevel(oldIntLevel);

}

// Function to implement all sleeping threads in a broadcast manner.
void Condition::Broadcast(Lock* conditionLock)
{
	// If we want to wake-up all threads in the wait queue then simply wake them up
	while(!cvWaitQueue->IsEmpty())
	{
		Signal(conditionLock);
	}
}
