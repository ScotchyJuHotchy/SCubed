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
void carlOrderTaker::carlOrderTakerLockAcquire()
{
	// Acquiring lock
	lockNewCustomerLine[orderTakerNumber]->Acquire();

	// Customer has joined a line & waiting for a order taker to signal
	// Change customer state to wait_order
	//orderTakerReadyState[orderTakerNumber] = false;

	orderTakerReady();
}

// Customer to be signalled for order
void carlOrderTaker::orderTakerReady()
{
	//printf("Line Length : %d \n", lineLength);
	while (orderTakerLineLength[orderTakerNumber] > 0)
	{
		printf("Line Length : %d\n", orderTakerLineLength[orderTakerNumber]);
		// Make the status of order taker Ready
		orderTakerReadyState[orderTakerNumber] = true;

		// Signal the customer
		cvOrderTakerReady[orderTakerNumber]->Signal(lockNewCustomerLine[orderTakerNumber]);
		printf("Order Taker has signalled to come & give order : OrderNo.-%d : Customer-%d \n", orderTakerNumber, customerNumber);

		// Acquire the customer order lock
		lockCustomerOrder[customerNumber]->Acquire();

		// Release the customer line lock
		lockNewCustomerLine[orderTakerNumber]->Release();

		// Make customer order ready
		if (!orderGiven)
		{
			// wait for the customer to give order
			printf("Waiting for customer order: OrderNo.-%d : Customer-%d \n", orderTakerNumber, customerNumber);
			cvCustomerOrdered[customerNumber]->Wait(lockCustomerOrder[customerNumber]);

			// Make the value of ordergiven as false
			orderGiven = false;
		}

		// Acquire customer serve lock
		lockCustomerServe[customerNumber]->Acquire();

		// Release customer order lock
		lockCustomerOrder[customerNumber]->Release();

		// Query the inventory for available food item
		//if (foodAvailable <= 0)
		//{
			//orderReady = false;
			
			//cvInventoryFill[orderTakerNumber]->Wait(lockInventoryCheck[orderTakerNumber]);
			//printf("Served Customer After Waiting: %d\n", locallineLength);

		//} else
		//{
			// Food is ready
			orderReady = true;

			// Signal customer to pick food
			cvOrderReady[customerNumber]->Signal(lockCustomerServe[customerNumber]);
			printf("Customer is signalled for order ready.: OrderNo.-%d : Customer-%d \n", orderTakerNumber, customerNumber);

			// Acquire customer serve lock
			lockCustomerOrderBagged[customerNumber]->Acquire();

			// Release customer order lock
			lockCustomerServe[customerNumber]->Release();

			// Wait to customer to pick food
			if (!foodPicked)
			{
				// Wait for customer to signal food picked
				printf("Waiting for customer to pick order: OrderNo.-%d : Customer-%d \n", orderTakerNumber, customerNumber);
				cvOrderPicked[customerNumber]->Wait(lockCustomerOrderBagged[customerNumber]);
				
				// Make food picked false
				foodPicked = false;
			}

			
			lockNewCustomerLine[orderTakerNumber]->Acquire();

			lockCustomerOrderBagged[customerNumber]->Release();


			//foodNotReady = false;
			//--foodAvailable;
		//}

		// release the inventory lock
		//lockInventoryCheck[orderTakerNumber]->Release();
		//printf("OrderTaker release lock\n");


		//if (foodNotReady)
		//{
			//lockNewCustomerLine[orderTakerNumber]->Acquire();
			// Signal the customer
			//cvFoodNotReady[orderTakerNumber]->Signal(lockNewCustomerLine[orderTakerNumber]);
			//printf("Order Taker has signalled that food is now ready\n", orderTakerNumber);
			//lockNewCustomerLine[orderTakerNumber]->Release();
			//printf("OrderTaker release lock in notFoodAvailable\n");

		//} 


		//printf("Order Taker has signalled\n", orderTakerNumber);

		// Debug message
		DEBUG('u', "Order Taker is Ready to take order: OrderNo.-%d : Customer-%d \n", orderTakerNumber, customerNumber);
		//--locallineLength;

	}
	
}

