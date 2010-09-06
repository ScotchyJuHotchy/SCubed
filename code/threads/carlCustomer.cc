// Cpp file for carls junior sim

#include "copyright.h"
#include "carlCustomer.h"

bool orderTakerReadyState[1];


carlCustomer::carlCustomer (char * debugName)
{
	name = debugName;
	//for(int i=0; i<30; i++)
	//customerState[i] = false;
}

carlCustomer::~carlCustomer()
{
}

// Function to Acquire lock for every created customer thread
void carlCustomer::customerLockAcquire(int customerNumber)
{

	DEBUG('u', "Lock acquired by customer for orderTaker : %d\n", customerNumber);

	// Acquiring lock
	lockNewCustomerLine[customerNumber]->Acquire();
	


	// Customer has joined a line & waiting for a order taker to signal
	// Change customer state to wait_order
	//customerState[customerNumber] = false;

	// Wait for the order taker to signal
	//printf("OrderTakerReadyState : %d\n", orderTakerReadyState[customerNumber]);
	//while (lineLength > 0)
	//{
	//for (int i=0; i<lineLength; i++)
	//{
	if(!orderTakerReadyState[customerNumber])
	{
		printf(" Customer waiting for ordertaker\n");
		// Giver order
		cvOrderTakerReadyStat[customerNumber]->Wait(lockNewCustomerLine[customerNumber]);
		
		lockNewCustomerLine[customerNumber]->Release();

		// If food is already ready simply grab it & leave
		if (foodNotReady)
		{

			//******* Temporary signalling done. Need to be done by cook for inventory
			// Acquire & release inventory lock
			lockInventoryCheck[customerNumber]->Acquire();
			cvInventoryFill[customerNumber]->Signal(lockInventoryCheck[customerNumber]);
			lockInventoryCheck[customerNumber]->Release();



			lockNewCustomerLine[customerNumber]->Acquire();
			printf("Food is not ready, waiting for it\n");
			cvFoodNotReady[customerNumber]->Wait(lockNewCustomerLine[customerNumber]);
			lockNewCustomerLine[customerNumber]->Release();
		} 

		// Grab your food & leave
		//customerFoodOrder(customerNumber);
	}

}

// Function which simulates order taking of a customer
void carlCustomer::customerFoodOrder(int customerNumber)
{
	--lineLength;
	//--foodAvailable;
	printf(" FoodAvailable : %d\n", foodAvailable);
	printf("Customer gave burger order to order taker no. %d\n", customerNumber);
}

