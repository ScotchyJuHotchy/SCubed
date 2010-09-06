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
	//lockNewCustomerLine[orderTakerNumber]->Acquire();

	// Customer has joined a line & waiting for a order taker to signal
	// Change customer state to wait_order
	//orderTakerReadyState[orderTakerNumber] = false;

	orderTakerReady(orderTakerNumber);
}

// Customer to be signalled for order
void carlOrderTaker::orderTakerReady(int orderTakerNumber)
{
	//printf("Line Length : %d \n", lineLength);
	while (locallineLength > 0)
	{
		lockNewCustomerLine[orderTakerNumber]->Acquire();
		// Check whether customer belongs to 
		orderTakerReadyState[orderTakerNumber] = true;

		//printf("Order Taker %d is ready\n", orderTakerNumber);

		// Signal the customer
		cvOrderTakerReadyStat[orderTakerNumber]->Signal(lockNewCustomerLine[orderTakerNumber]);
		printf("Order Taker has signalled to move either in next queue or out\n", orderTakerNumber);
		
		lockNewCustomerLine[orderTakerNumber]->Release();

		// Release your lock & acquire inventory lock
		lockInventoryCheck[orderTakerNumber]->Acquire();

		//printf(" OrderTaker : Food was not Available : %d\n", foodAvailable);
		// Query the inventory for available food item
		if (foodAvailable <= 0)
		{
			foodNotReady = true;
			printf(" waiting : As Food was not Available : %d\n", foodAvailable);
			// Wait for the food item to get ready
			cvInventoryFill[orderTakerNumber]->Wait(lockInventoryCheck[orderTakerNumber]);
			printf("Served Customer After Waiting: %d\n", locallineLength);

		} else
		{
			printf("Served Customer : %d\n", locallineLength);
			foodNotReady = false;
			--foodAvailable;
		}

		// release the inventory lock
		lockInventoryCheck[orderTakerNumber]->Release();
		//printf("OrderTaker release lock\n");


		if (foodNotReady)
		{
			lockNewCustomerLine[orderTakerNumber]->Acquire();
			// Signal the customer
			cvFoodNotReady[orderTakerNumber]->Signal(lockNewCustomerLine[orderTakerNumber]);
			printf("Order Taker has signalled that food is now ready\n", orderTakerNumber);
			lockNewCustomerLine[orderTakerNumber]->Release();
			//printf("OrderTaker release lock in notFoodAvailable\n");

		} 


		//printf("Order Taker has signalled\n", orderTakerNumber);

		// Debug message
		DEBUG('u', "Order Taker is Ready to take order\n");
		--locallineLength;

	}
	
}

