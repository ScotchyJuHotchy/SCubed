// Cpp file for carls junior sim

#include "copyright.h"
#include "carlOrderTaker.h"




carlOrderTaker::carlOrderTaker (char * debugName)
{
	name = debugName;

	for (int i=0; i<5; i++)
	{
		orderTakerReadyState[i] = false;
	}
}

carlOrderTaker::~carlOrderTaker()
{
}

// Function to Acquire lock for every created customer thread
void carlOrderTaker::carlOrderTakerLockAcquire(int orderTakerNumber)
{

	DEBUG('u', "Lock acquired by orderTaker : %d\n", orderTakerNumber);

	// Acquiring lock
	lockNewCustomerLine[orderTakerNumber]->Acquire();

	// Customer has joined a line & waiting for a order taker to signal
	// Change customer state to wait_order
	orderTakerReadyState[orderTakerNumber] = false;
}

// Customer to be signalled for order
void carlOrderTaker::orderTakerReady(int orderTakerNumber)
{
	// Check whether customer belongs to 
	orderTakerReadyState[orderTakerNumber] = true;

	// Debug message
	DEBUG('u', "Order Taker is Ready to take order\n");
}

