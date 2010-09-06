// Cpp file for carls junior sim

#include "copyright.h"
#include "carlOrderTaker.h"


//bool orderTakerReadyState[1];

carlOrderTaker::carlOrderTaker (char * debugName)
{
	name = debugName;
	locallineLength = 6;

	for (int i=0; i<1; i++)
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
	// Acquiring lock
	lockNewCustomerLine[orderTakerNumber]->Acquire();

	// Customer has joined a line & waiting for a order taker to signal
	// Change customer state to wait_order
	//orderTakerReadyState[orderTakerNumber] = false;

	orderTakerReady(orderTakerNumber);
}

// Customer to be signalled for order
void carlOrderTaker::orderTakerReady(int orderTakerNumber)
{
	printf("Line Length : %d ", lineLength);
	while (locallineLength > 0)
	{
	//	for(int i=0; i<lineLength; i++)
	//{
		// Check whether customer belongs to 
		orderTakerReadyState[orderTakerNumber] = true;

		printf("Order Taker %d is ready\n", orderTakerNumber);
				
		// release it's acquired lock to check inventory
		lockNewCustomerLine[orderTakerNumber]->Release();

		// Release your lock & acquire inventory lock
		lockInventoryCheck[orderTakerNumber]->Acquire();

		// Query the inventory for available food item
		if (!foodAvailable)
		{
			foodNotReady = true;
		} 

		// release the inventory lock
		lockInventoryCheck[orderTakerNumber]->release();

		// Take customer lock & signal to leave
		// Acquiring lock
		lockNewCustomerLine[orderTakerNumber]->Acquire();

		// Signal the customer
		cvOrderTakerReadyStat[orderTakerNumber]->Signal(lockNewCustomerLine[orderTakerNumber]);

		if (!foodAvailable)
		{
			// Signal the customer
			cvFoodNotReady[orderTakerNumber]->Signal(lockNewCustomerLine[orderTakerNumber]);

		} 


		printf("Order Taker has signalled", orderTakerNumber);

		// Debug message
		DEBUG('u', "Order Taker is Ready to take order\n");
		--locallineLength;

	//}
	// Signal first customer to come & order
	//cvOrderTakerReadyStat[orderTakerNumber]->Signal(lockNewCustomerLine[orderTakerNumber]);
	//lockFoodBagging[orderTakerNumber]->Acquire();
	}

	lockNewCustomerLine[orderTakerNumber]->Release();
}

