// File for simulating carls junior

#include "copyright.h"
#include "carlCustomer.h"
#include "carlOrderTaker.h"
#include "globalDefines.h"

Lock *lockNewCustomerLine[ORDERTAKERS];
carlCustomer *customer=new carlCustomer("customer");
carlOrderTaker *orderTaker=new carlOrderTaker("orderTaker");

// Function declaration for new customer
void createCustomer (int customerNumber);

// Function to create order taker locks
void createOrderTakerLocks ();

// Function to create order taker
void createOrderTaker (int orderTakerNumber);


// Main function which will take care of all objects & threads
void carlsJuniorSim ()
{
	// Character pointers used for unique names
	char *name;

	// Create order takers for taking orders
	createOrderTakerLocks ();
	
	DEBUG('u', "Creating new costomer\n");

	// Creating customers
	for (int i=0; i<CUSTOMERS; i++)
	{
		//customer->newCustomer(i);
		name = new char[25];
		sprintf(name,"newCustomer_%d",i);
		Thread *newCustomerThread = new Thread(name);

		newCustomerThread->Fork((VoidFunctionPtr)createCustomer, i);

	}

	// Creating order takers
	for (int j=0; j<ORDERTAKERS; j++)
	{
		//customer->newCustomer(i);
		name = new char[25];
		sprintf(name,"newOrderTaker_%d",j);
		Thread *newOrderTakerThread = new Thread(name);

		newOrderTakerThread->Fork((VoidFunctionPtr)createOrderTaker, j);

	}

}

// Function to be called for creating new customers
void createCustomer (int customerNumber)
{
	DEBUG('u', "CustomerLockAcquire called\n");
	customer->customerLockAcquire(customerNumber/6);
}

// Function to be called for creating Locks for simulating lines in front of order takers
void createOrderTakerLocks ()
{
	char *name;

	for (int j=0;j<ORDERTAKERS ;j++ )
	{
		DEBUG('u', "Creating new lock for ordertaker : %d\n",j);
		name = new char[25];
		sprintf(name,"ordertaker_%d",j);
		lockNewCustomerLine[j]= new Lock(name);
	}
}

// Function to be called for creating OrderTaker
void createOrderTaker (int orderTakerNumber)
{
	DEBUG('u', "OrderTakerLockAcquire called\n");
	orderTaker->carlOrderTakerLockAcquire(orderTakerNumber);
}

