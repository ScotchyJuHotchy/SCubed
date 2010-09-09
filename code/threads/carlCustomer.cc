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
void carlCustomer::customerLockAcquire()
{

	DEBUG('u', "Lock acquired by customer for orderTaker : OrderNo.-%d : Customer- %d \n", orderTakerNumber, customerNumber);

	// Check if linelength is not zero
	// Acquiring lock
	lockNewCustomerLine[orderTakerNumber]->Acquire();

	// Check if there is any line or not
	if ((orderTakerLineLength[orderTakerNumber] >= 0) && (orderTakerReadyState[orderTakerNumber] = true))
	{		
		// Increase the lineLength as customer is added in line
		//++lineLength;
		++orderTakerLineLength[orderTakerNumber];

		// Wait for the ordertakers signal
		printf(" Customer number waiting for ordertaker: OrderNo.-%d : Customer- %d \n", orderTakerNumber, customerNumber);
		
		// Order Taker signalled 
		cvOrderTakerReady[orderTakerNumber]->Wait(lockNewCustomerLine[orderTakerNumber]);
		
		// decrease the lineLength as customer is out of line now
		//--lineLength;
		--orderTakerLineLength[orderTakerNumber];

		// Acquire the lock for order
		lockCustomerOrder[customerNumber]->Acquire();

		// Release your lock for line
		lockNewCustomerLine[orderTakerNumber]->Release();

		// Customer ordered
		printf("Customer no. ordered cold drink: OrderNo.-%d : Customer-%d \n", orderTakerNumber, customerNumber);
 
		// Customer Ordered the food
		orderGiven = true;

		// Signal the order taker that order is given
		cvCustomerOrdered[customerNumber]->Signal(lockCustomerOrder[customerNumber]);

		// Acquire orderPickUp/Serivice lock
		lockCustomerServe[customerNumber]->Acquire();

		// Release Customer order lock
		lockCustomerOrder[customerNumber]->Release();

		// Check if order has not come
		if (!orderReady)
		{
			// wait if order has not come
			printf("Customer waiting for order to get served: OrderNo.-%d : Customer-%d \n", orderTakerNumber, customerNumber);
			cvOrderReady[customerNumber]->Wait(lockCustomerServe[customerNumber]);

			orderReady = false;

		} 

		// Acquire Customer order bagged lock
		lockCustomerOrderBagged[customerNumber]->Acquire();

		// Release the customer serve order
		lockCustomerServe[customerNumber]->Release();
		
		// Pick up your food & signal ordertaker that food is picked & leave
		// Signal the order taker that order is picked
		foodPicked = true;
		cvOrderPicked[customerNumber]->Signal(lockCustomerOrderBagged[customerNumber]);
		printf("Customer has signalled that food is bagged: OrderNo.-%d : Customer-%d \n", orderTakerNumber, customerNumber);

		lockCustomerOrderBagged[customerNumber]->Release();
		// Grab your food & leave
		customerFoodOrder();
	}

}


// Function which simulates order taking of a customer
void carlCustomer::customerFoodOrder()
{
	//--foodAvailable;
	printf("Customer number got his food: OrderNo.-%d : Customer-%d \n", orderTakerNumber, customerNumber);
}

