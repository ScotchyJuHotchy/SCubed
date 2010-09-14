// File to run full simulation of carls junior

#include "stdio.h"
#include "iostream.h"
#include "copyright.h"
#include "thread.h"
#include "system.h"
#include "switch.h"
#include "synch.h"
#include "list.h"
#include "globalDefines.h"

using namespace std;






// Declare all functions here with there explanations

// Set up function declarations

// Function to setUp all locks, variables, & arrays
// This function will be the first one to be called as all locks & CVs need to initialized
// before their usage
void setUpLocksCVVar();

// Function to setup carl customer.
// This function will perform all required setup functionality like initialising variables
// creating customer thread & calling other function associated with carl customer etc.
void setupCarlCustomer ();

// Function to setup carl OrderTaker.
// This function will perform all required setup functionality like initialising variables
// creating OrderTaker thread & calling other function associated with carl orderTaker etc.
void setUpCarlOrderTaker();

// Fucntion to setup the variables & lock for Waiter
// This function will be first called before create waiter & initialize all locks, condition var
// and arrays.
void setUpCarlWaiter();

// Function to setUp carl Manager. This function will fork the manager thread & will in-turn start 
// manager thread
void setUpCarlManager();

// Customer function which will invoke customer & do basic functionality 
// like giving order to ordertaker, waiting for order if not available
// grabing there order & leave
void carlCustomer (int customerNumber);

// Function to define functionality of orderTaker
// This will implement all the functioanlity of orderTaker like taking order
// bagginbg food if food is ready, waiting for food if not ready
// giving token number to waiter in case customer is waiting in restaurant to eat-in
void carlOrderTaker(int orderTakernumber);

// Function to implement carl waiter functionality. A waiter normally remains spleeping till
// some customer comes & wait for it in restaurant area. Once a customer starts waiting manager
// call waiters from break & they start serving the customer. After they are done with serving they 
// go to sleep if nothing to do & it's duty of manager only to wake them up again
void carlWaiter(int waiterNumber);


// Function to perform the manager duties. It performs waking of ordertakers, waking
// of waiters & waiting of cooks depending on certain conditions. It also tells cook to go on break.
// This thread will continously perform it's operation irrespective of other threads.
void carlManager(int manager);

// Function used to wakeUp a sleeping waiting or calling a waiter from break
// This will be called from Manager, by manager when a customer is waiting to eatIn
void wakeUpWaiter();

// Fucntion to implement orderTaker waking up from Manager.
// This will be called from manager when there us someone in line & an ordertaker is available but not serving
void wakeUpOrderTaker();

//Manager can call this to check for food. Checks if there is cash as well.
void checkFood();
void orderFoodThread();

// Testing Function
void carlsJrTestSuit();
void setupSim();
void testCase1();
void testCase2();
void testCase3();




//*********************************
// SET UP FUNCTIONS
//*********************************
// Function to setUp all locks, variables, & arrays
// This function will be the first one to be called as all locks & CVs need to initialized
// before their usage
void setUpLocksCVVar()
{
	char *name;
	int enteredCustomerNumbers;
	int enteredOrderTakerNumbers;

	// Create the no. of customers by taking input from user
	cout <<"Please provide number of customers : "<<endl;

	// Take the input from user
	cin >> enteredCustomerNumbers;

	// Save the given num of customers in a global variable
	numberOfCustomers = enteredCustomerNumbers;

	// Create the no. of customers by taking input from user
	cout <<"Please provide number of OrderTakers : "<<endl;

	// Take the input from user
	cin >> enteredOrderTakerNumbers;

	// Save the given num of customers in a global variable
	numberOfOrderTakers = enteredOrderTakerNumbers;

	// Initialize line lock
	lockCustomerLine = new Lock("lockCustomerLine");
	restaurantEatInLock = new Lock("restaurantEatInLock");
	cvCustomerWaitingLine = new Condition("cvCustomerWaitingLine");
	cvOrderTakerWakeUp = new Condition("cvOrderTakerWakeUp");

	lockWaitingWaiter = new Lock("lockWaitingWaiter");   //Lock on which all waiters are waiting when they
														 // are on break.
	// Initilaiaze the Locks & Condition variables required for different interactions
	cvWaitingWaiter = new Condition("cvWaitingWaiter");

	lockManager = new Lock("lockManager");   // We can put it in manager

	/*for (int i=0; i<numberOfCustomers; i++)
	{
		
		// Decrease the restaurant capacity by number of customer
		restaurantCapacity--;
		
		// Initialize the customer eatIn stautus
		customerEatInStat[i] = -1;
		
		// Set up the Customer Structure with initial data
		// for instance initially csutomer has not ordered any food
		// fo dollar6Burger pr french fries will be 0
		//customerData[i].eatIn = 0;
		//customerData[i].dollar6Burger = 0;
		//customerData[i].dollar3Burger = 0;
		//customerData[i].veggieBurger = 0;
		//customerData[i].frenchFries = 0;
		//customerData[i].soda = 0;
		//customerData[i].customerIdentifier = -1;
		//customerData[i].orderTakerIdentifier = -1;
		//customerData[i].waiterIdentifier = -1;
		
		name = new char[50];
		sprintf(name,"lockWaitingOrderTaker_%d",i);
		lockWaitingOrderTaker[i]= new Lock(name);

		name = new char[50];
		sprintf(name,"lockWaitingCustomer_%d",i);
		lockWaitingCustomer[i]= new Lock(name);

		name = new char[50];
		sprintf(name,"cvWaitingOrderTaker_%d",i);
		cvWaitingOrderTaker[i] = new Condition(name);

		name = new char[50];
		sprintf(name,"cvWaitingCustomer_%d",i);
		cvWaitingCustomer[i] = new Condition(name);
	}

	for (int k=0; k<numberOfOrderTakers; k++)
	{
		// Set up the OrderTaker Structure with initial data
		orderTakerData[k].customerIdentifier = -1;
		orderTakerData[k].orderTakerIdentifier = -1;
		orderTakerData[k].waiterIdentifier = -1;

		// Initialize order taker status
		orderTakerStatus[k] = 1;

		// Set up foodReady
		foodReady[k] = true;

		// Initilaiaze the Locks & Condition variables required for different interactions
		name = new char[50];
		sprintf(name,"lockOrderTakerServe_%d",k);
		lockOrderTakerServe[k]= new Lock(name);

		name = new char[50];
		sprintf(name,"lockOrderTakerFoodBagged_%d",k);
		lockOrderTakerFoodBagged[k] = new Lock(name);

		//name = new char[50];
		//sprintf(name,"lockOrderTakerWakeUp_%d",k);
		//lockOrderTakerWakeUp[k]= new Lock(name);

		name = new char[50];
		sprintf(name,"cvOrderTakerServe_%d",k);
		cvOrderTakerServe[k] = new Condition(name);

		name = new char[50];
		sprintf(name,"cvOrderTakerFoodBagged_%d",k);
		cvOrderTakerFoodBagged[k] = new Condition(name);
	}

	for (int j=0; j<MAX_WAITERS; j++)
	{
		// Initialize the status of waiters
		waiterStatus[j] = 0;  // This means all waiter are sleeping in starting

		// Initialize the waiter data
		waiterData[j].customerToken = -1;
		waiterData[j].orderTakerToken = -1;
	}*/
		
}


// Function to setup customer specific data & to create carl customer.
void setupCarlCustomer ()
{
	
	char *name;

	// Check for the input for valid number ***** DO IT LATER

	// Invoke customer threads for total num,ber of customers entered by user
	for (int i=0; i<numberOfCustomers; i++)
	{
		
		// Decrease the restaurant capacity by number of customer
		restaurantCapacity--;

		// Set up the Customer Structure with initial data
		// for instance initially csutomer has not ordered any food
		// fo dollar6Burger pr french fries will be 0
		customerData[i].eatIn = 1;
		customerData[i].dollar6Burger = 0;
		customerData[i].dollar3Burger = 0;
		customerData[i].veggieBurger = 0;
		customerData[i].frenchFries = 1;
		customerData[i].soda = 1;
		customerData[i].customerIdentifier = -1;
		customerData[i].orderTakerIdentifier = -1;
		customerData[i].waiterIdentifier = -1;

		// Initialize the customer eatIn stautus
		customerEatInStat[i] = -1;

		name = new char[50];
		sprintf(name,"lockWaitingOrderTaker_%d",i);
		lockWaitingOrderTaker[i]= new Lock(name);

		name = new char[50];
		sprintf(name,"lockWaitingCustomer_%d",i);
		lockWaitingCustomer[i]= new Lock(name);

		name = new char[50];
		sprintf(name,"cvWaitingOrderTaker_%d",i);
		cvWaitingOrderTaker[i] = new Condition(name);

		name = new char[50];
		sprintf(name,"cvWaitingCustomer_%d",i);
		cvWaitingCustomer[i] = new Condition(name);

		name = new char[50];
		sprintf(name,"cvrestaurantEatIn_%d",i);
		cvRestaurantEatIn[i] = new Condition(name);
		

		// Create a unique name for all created threads
		name = new char[50];
		sprintf(name,"Customer_%d",i);
		Thread *newCustomerThread = new Thread(name);
		newCustomerThread->Fork((VoidFunctionPtr)carlCustomer, i);
	}
}


// Function to setup the variables for order taker
// Also used to initialize all the variables used by ordertaker
void setUpCarlOrderTaker ()
{
	
	char *name;

	

	// Check for the input for valid number ***** DO IT LATER

	// Invoke customer threads for total num,ber of customers entered by user
	for (int k=0; k<numberOfOrderTakers; k++)
	{
		// Set up the OrderTaker Structure with initial data
		orderTakerData[k].customerIdentifier = -1;
		orderTakerData[k].orderTakerIdentifier = -1;
		orderTakerData[k].waiterIdentifier = -1;

		// Initialize order taker status
		orderTakerStatus[k] = 1;

		// Set up foodReady
		foodReady[k] = true;

		// Initilaiaze the Locks & Condition variables required for different interactions
		name = new char[50];
		sprintf(name,"lockOrderTakerServe_%d",k);
		lockOrderTakerServe[k]= new Lock(name);

		name = new char[50];
		sprintf(name,"lockOrderTakerFoodBagged_%d",k);
		lockOrderTakerFoodBagged[k] = new Lock(name);

		//name = new char[50];
		//sprintf(name,"lockOrderTakerWakeUp_%d",k);
		//lockOrderTakerWakeUp[k]= new Lock(name);

		name = new char[50];
		sprintf(name,"cvOrderTakerServe_%d",k);
		cvOrderTakerServe[k] = new Condition(name);

		name = new char[50];
		sprintf(name,"cvOrderTakerFoodBagged_%d",k);
		cvOrderTakerFoodBagged[k] = new Condition(name);

		// Create a unique name for all created threads
		name = new char[50];
		sprintf(name,"OrderTaker_%d",k);
		Thread *newOrderTakerThread = new Thread(name);
		newOrderTakerThread->Fork((VoidFunctionPtr)carlOrderTaker, k);
	}
}



// Fucntion to setup the variables & fork threads to create carl waiter
void setUpCarlWaiter()
{
	char *name;
	Thread *newWaiterThread;
	
	for (int j=0; j<MAX_WAITERS; j++)
	{
		// Initialize the status of waiters
		waiterStatus[j] = 0;  // This means all waiter are sleeping in starting

		// Initialize the waiter data
		waiterData[j].customerToken = -1;
		waiterData[j].orderTakerToken = -1;

		name=new char[50];
		sprintf(name,"Waiter_%d",j);
		newWaiterThread=new Thread(name);
		newWaiterThread->Fork((VoidFunctionPtr)carlWaiter,j);
	}
}

// Function to setUp carl Manager. It will fork a thread to create cark manager
void setUpCarlManager()
{
	char *name;

	name=new char[50];
	sprintf(name,"Manager");
	Thread *newManagerThread=new Thread(name);
	newManagerThread->Fork((VoidFunctionPtr)carlManager,1);
}


//********* END OF SET-UP FUNCTIOONS********
//*****************************************



//*********CARL CUSTOMER FUNCTION*********
//*****************************************

// Customer function which will invoke customer
void carlCustomer (int customerNumber)
{
	// Create a local variable for saving the orderTaker's number associated with customer
	int myOrderTaker = -1;
	int tempcash = 0;

	// Set the customer ID in customer data
	// This ID will be used as customer number in future or can be used as Token also
	customerData[customerNumber].customerIdentifier = customerNumber;

	// Acquire the line lock
	lockCustomerLine->Acquire();

	// Check the status of all order takers
	for (int i=0; i<numberOfOrderTakers; i++)
	{
		// Check the status of order taker
		if (orderTakerStatus[i] == 0)	// Order Taker is available
		{
			// Make it busy & give me the no. of this ordertaker
			orderTakerStatus[i] = 1;
			myOrderTaker = i;

			// Fill the customer info in orderTaker structure & in it's structure
			customerData[customerNumber].orderTakerIdentifier = myOrderTaker;
			orderTakerData[i].customerIdentifier = customerNumber;

			// Break on first available orderTaker
			break;
		}
	}

	// If none of the ordertaker is available
	if (myOrderTaker == -1)
	{
		// Simple get into the line & increase teh line length
		customerLineLength++;

		// Wait on the ordertaker to call i.e wait on ordertaker condition varaible
		cvCustomerWaitingLine->Wait(lockCustomerLine);
	}

	// Some order taker has signalled me & I have to get into the line
	for (int i=0; i<numberOfOrderTakers; i++)
	{
		if (orderTakerStatus[i] == 2)  // Order Taker has signalled someone & is waiting for a customer to come
		{
			// Take the no. of this ordertaker 
			myOrderTaker = i;

			// Make the state of this order taker busy now
			orderTakerStatus[i] = 1;

			// Fill the customer info in orderTaker structure & own structure
			customerData[customerNumber].orderTakerIdentifier = myOrderTaker;
			orderTakerData[i].customerIdentifier = customerNumber;

			// Break on first available orderTaker
			break;
		}
	}
	cout <<"OrderTaker ["<<customerData[customerNumber].orderTakerIdentifier<<"] is taking order of Customer ["<<customerNumber<<"]"<<endl;
	// Look for a availale manager if no ordertaker is ready
	/****************************88
		for (int i=0; i<numberOfOrderTakers; i++)
		{
			if (orderTakerStatus[i] == 2)  // Order Taker has signalled someone & is waiting for a customer to come
			{
				// Take the no. of this ordertaker 
				myOrderTaker = i;

				// Make the state of this order taker busy now
				orderTakerStatus[i] = 1;
			}
		}
	//********************************/

	// Customer has ordered its order
	// Print the customer message required as part of output gudlines
	cout <<"Customer ["<<customerNumber<<"] is giving order to OrderTaker["<<customerData[customerNumber].orderTakerIdentifier<<"]"<<endl;
	
	// Get served by ordertaker
	// Relaese the customer linelock & acquire serving lock
	lockCustomerLine->Release();

	// Acquire the customer serve lock to get served for food
	lockOrderTakerServe[myOrderTaker]->Acquire();

	// Give order for food & print the customer order

	// Customer is ordering dollar6 burger
	if (customerData[customerNumber].dollar6Burger)
	{
		cout <<"Customer ["<<customerNumber<<"] is ordering 6-dollar burger"<<endl;
		tempcash += 2;
	} else
	{
		cout <<"Customer ["<<customerNumber<<"] is [not] ordering 6-dollar burger"<<endl;
	}
	// Customer is ordering dollar3 burger
	if (customerData[customerNumber].dollar3Burger)
	{
		cout <<"Customer ["<<customerNumber<<"] is ordering 3-dollar burger"<<endl;
		tempcash += 2;
	} else
	{
		cout <<"Customer ["<<customerNumber<<"] is [not] ordering 3-dollar burger"<<endl;
	}
	// Customer is ordering veggieBurger
	if (customerData[customerNumber].veggieBurger)
	{
		cout <<"Customer ["<<customerNumber<<"] is ordering veggie burger"<<endl;
		tempcash += 2;
	} else
	{
		cout <<"Customer ["<<customerNumber<<"] is [not] ordering veggie burger"<<endl;
	}
	// Customer is ordering french fries
	if (customerData[customerNumber].frenchFries)
	{
		cout <<"Customer ["<<customerNumber<<"] is ordering french fries"<<endl;
		tempcash += 2;
	} else
	{
		cout <<"Customer ["<<customerNumber<<"] is [not] ordering french fries"<<endl;
	}
	// Customer is ordering soda
	if (customerData[customerNumber].soda)
	{
		cout <<"Customer ["<<customerNumber<<"] is ordering soda"<<endl;
		tempcash += 1;
	} else
	{
		cout <<"Customer ["<<customerNumber<<"] is [not] ordering soda"<<endl;
	}

	// Tell ordertaker that customer has given order
	cvOrderTakerServe[myOrderTaker]->Signal(lockOrderTakerServe[myOrderTaker]);
	
//Scott added this cash interaction. It works because when a thread leaves wait and signal it still holds the lock
	
    //wait for cashier to say he is ready to take money
	cvOrderTakerServe[myOrderTaker]->Wait(lockOrderTakerServe[myOrderTaker]);	
	//pay money
	cash += tempcash;
	//tell cashier you paid
	cvOrderTakerServe[myOrderTaker]->Signal(lockOrderTakerServe[myOrderTaker]);


	// Customer will choose here that whether he wants to eat-in or go
	if (customerData[customerNumber].eatIn)   // Customer has decided to eat-in
	{
		// Acquire the restaurant eating lock
		restaurantEatInLock->Acquire();

		// Release the order taker lock as customer will wait for the waiter to get
		lockOrderTakerServe[myOrderTaker]->Release();

		// Print the simulation output for customer
		cout <<"Customer ["<<customerNumber<<"] chooses to eat-in the food"<<endl;

		// Check whether there is any table empty or not
		if (restaurantCapacity <= 0)
		{
			// There is no place in restaurant. Customer has to wait now for place in restaurant
			//*********************
			//*********************

		}

		// Change the status of customer in restaurant eatIn record
		customerEatInStat[customerNumber] = 0;		// Customer is given a table with customer ID & is waiting for food

		// Wait for the orderTaker to give token
		//cvRestaurantEatIn[customerNumber]->Wait(restaurantEatInLock);

		// Acquire waiter serving lock with waiter identifies to be served
		//cout <<"Waiter identifier :"<<customerData[customerNumber].waiterIdentifier<<endl;
		lockWaitingCustomer[customerNumber]->Acquire();

		// Release the eatIn status lock
		restaurantEatInLock->Release();

		// Pint message required for simulation
		cout <<"Customer ["<<customerNumber<<"] is waiting for the waiter to serve the food"<<endl;
		
		// Customer will wait for waiter to serve order
		cvWaitingCustomer[customerNumber]->Wait(lockWaitingCustomer[customerNumber]);

		// Once got the food, Print message
		cout <<"Customer ["<<customerNumber<<"] is served by waiter "<<customerData[customerNumber].waiterIdentifier<<endl;

		// Release the lock
		lockWaitingCustomer[customerNumber]->Release();

	} else // Customer decided to go 
	{
		// if Customer food is ready customer will simply walk away
		// else he has to wait for his food to get ready
		if (!foodReady[myOrderTaker])
		{
			// Print the required simulation message 
			cout <<"Customer ["<<customerNumber<<"] is given token number ["<<customerNumber<<"] by the OrderTaker ["<<myOrderTaker<<"]"<<endl;

			// Wait for the food to get ready
			cvOrderTakerServe[myOrderTaker]->Wait(lockOrderTakerServe[myOrderTaker]);

			// Customer will leave restaurant after taking it's food
			cout <<"Customer ["<<customerNumber<<"] is leaving the restaurant after OrderTaker ["<<myOrderTaker<<"] packed the food"<<endl;
		} else
		{
			// Wait for the orderTaker to bag food
			cvOrderTakerServe[myOrderTaker]->Wait(lockOrderTakerServe[myOrderTaker]);

			// Food is ready & customer can simple take it's food & can leave
			cout <<"Customer ["<<customerNumber<<"] receives food from the OrderTaker ["<<myOrderTaker<<"]"<<endl;
		}

		// Signal ordertaker that food taken
		
		// Relaese the lock acquired to wait for order to get ready
		lockOrderTakerServe[myOrderTaker]->Release();

	}

	// Increase the restaurant availabity
	restaurantCapacity++;

}



//*********END OF CARL CUSTOMER FUNCTION*********
//***********************************************



//*********CARL ORDER-TAKER FUNCTION*********
//*********************************************

// Function to define functionality of orderTaker
// This will implement all the functioanlity of orderTaker like taking order
// bagginbg food if food is ready, waiting for food if not ready
// giving token number to waiter in case customer is waiting in restaurant to eat-in
void carlOrderTaker(int orderTakernumber)
{
	// This thread should run continously
	while (true)
	{
		cashLock.Acquire();
		if(askForCash == true)
		{
			managerCash = cash;
			askForCash = false;
		}
		cashLock.Release();
		
		
		// Acquire the line lock to talk to the customer
		lockCustomerLine->Acquire();

		// Check the line length of customer.
		// If there are customers waiting to be serviced then call them one by one
		if (customerLineLength > 0)
		{
			//cout <<"LineLength 1 "<<customerLineLength<<endl;
			// Signal the customer to come & order
			cvCustomerWaitingLine->Signal(lockCustomerLine);

			// Decrease the line lenth as customer is no more waiting & is getting serviced 
			customerLineLength--;
			//cout <<"LineLength 2 "<<customerLineLength<<endl;

			// Change the status of order taker to waiting for customer after signalling
			// This signal will show that order taker has signalled the customer & is now kind off busy
			orderTakerStatus[orderTakernumber] = 2;
		} else if(foodToBag)	//check if there is food any to bag if no customer is in line
		{
			// Release the previous lock
			// Acquire inventory lock
			// Start Bagging  food & decrease the inventory
			// Also signal the customer to take there food. May be braodcast on customer no. with unique customer ID
			
			// Go back to the 
			continue;
		} else // Simply make order taker available & let them wait for customer
		{
			// Make status of the orderTaker available
			orderTakerStatus[orderTakernumber] = 0;

			// Wait for the customer to come & Signal as there is no one in Line & there is nothing to do
			//wait invoked by manager
			//************************88
			//**************************

			// IMPORTANT TO READ***************
			//********************************
			// The dowan wait statement is presently coming incorect as we don't have a wait from manager to ordertaker
			// once it will come the ouput will be fine
			//for(int j=0;j<500000;j++)
			//{
			//	currentThread->Yield();
			//}

			// OrderTaker is available & has no work to do. So going to sleep/break
			// OrderTaker will be waken up by manager if some customer will come.
			// This will be done by a simple broadcast.
			//cout <<"Order Taker waiting for manager to wake him up"<<endl;
			//cvOrderTakerWakeUp->Wait(lockCustomerLine);

			//cout <<"ORTER TAKER GOT UP"<<endl;
		}


		// Acquire the ordertaker serving lock & wait for customer to come & give order
		lockOrderTakerServe[orderTakernumber]->Acquire();

		// Relaese the previous lock 
		lockCustomerLine->Release();

		// Print the simulation related output that ordertaker has taken the order
		//cout <<" OrderTaker ["<<orderTakernumber<<"] is taking order of Customer ["<<orderTakerData[orderTakernumber].customerIdentifier<<"]"<<endl;

		//Waiting for the customer to give order
		cvOrderTakerServe[orderTakernumber]->Wait(lockOrderTakerServe[orderTakernumber]);
		
		
		//tell Customer to pay
		cvOrderTakerServe[orderTakernumber]->Signal(lockOrderTakerServe[orderTakernumber]);
		
		//wait for payment
		cvOrderTakerServe[orderTakernumber]->Wait(lockOrderTakerServe[orderTakernumber]);
		

		// Acquire the Inventory lock, & then release the service lock
		// inventoryLock->Acquire;

		// Release the customer serving lock
		//lockOrderTakerServe[orderTakernumber]->Release();

		// Check the type of order. Whether it is eat-in or to-go
		if (customerData[orderTakerData[orderTakernumber].customerIdentifier].eatIn)
		{
			// Grab the eatIn lock
			restaurantEatInLock->Acquire();

			// Release the orderTaker as customer has decided to eatIn
			lockOrderTakerServe[orderTakernumber]->Release();

			// Customer has decided to eat-in
			// update the customer token in waiter data
			waiterData[orderTakerData[orderTakernumber].waiterIdentifier].orderTakerToken = orderTakerData[orderTakernumber].customerIdentifier;

			

			// Print the simulation message for customer tokenm no.
			cout <<"OrderTaker ["<<orderTakernumber<<"] gives token number ["<<orderTakerData[orderTakernumber].customerIdentifier<<"] to Customer ["<<orderTakerData[orderTakernumber].customerIdentifier<<"]"<<endl;

			// Wait for the waiter to ask for token
			//cout <<"Ordertaker : waiting for waiter to ask for token"<<endl;
			cvRestaurantEatIn[orderTakerData[orderTakernumber].customerIdentifier]->Wait(restaurantEatInLock);

			waiterData[orderTakerData[orderTakernumber].waiterIdentifier].orderTakerToken = orderTakerData[orderTakernumber].customerIdentifier;

			//cout <<" OrderTaker ["<<orderTakernumber<<"] gives token number ["<<waiterData[orderTakerData[orderTakernumber].waiterIdentifier].orderTakerToken<<"] to Customer ["<<orderTakerData[orderTakernumber].customerIdentifier<<"]"<<endl;
			//cout <<" Setting token no. "<<waiterData[orderTakerData[orderTakernumber].waiterIdentifier].orderTakerToken<<" for waiter "<<orderTakerData[orderTakernumber].waiterIdentifier<<endl;

			// Grab the waiter waiting for order & for ordertaker's signal
			lockWaitingOrderTaker[orderTakerData[orderTakernumber].customerIdentifier]->Acquire();

			// Release the lock
			restaurantEatInLock->Release();
			//cout <<"Ordertaker eatin lock released"<<endl;
		
		
			// Check wheteher food is ready or not
			// Process the customer order
			if (!foodReady[orderTakernumber])
			{
				// Wait for the inventory to get food
				// Wait on inventory lock
				// Relaese your lock
				// Bag the food & signal customer
			}

			// Signal the waiter that food is ready
			//cout <<"OrderTaker signalled food is ready"<<endl;
			cvWaitingOrderTaker[orderTakerData[orderTakernumber].customerIdentifier]->Signal(lockWaitingOrderTaker[orderTakerData[orderTakernumber].customerIdentifier]);

			// Release the lock after signalling
			lockWaitingOrderTaker[orderTakerData[orderTakernumber].customerIdentifier]->Release();

		} else
		{
			// Process the customer order
			if (!foodReady[orderTakernumber])
			{
				// Wait for the inventory to get food
				// Wait on inventory lock
				// Relaese your lock
				// Bag the food & signal customer
				cvOrderTakerServe[orderTakernumber]->Signal(lockOrderTakerServe[orderTakernumber]);
			} else
			{
				//need to wait at customer taking order
				cout <<"OrderTaker ["<<orderTakernumber<<"] gives food to Customer ["<<orderTakerData[orderTakernumber].customerIdentifier<<"]"<<endl;
				cvOrderTakerServe[orderTakernumber]->Signal(lockOrderTakerServe[orderTakernumber]);
			}
		
			// Release the orderTaker lock go back looking for customers
			lockOrderTakerServe[orderTakernumber]->Release();
			// Wait for the customer to pick food & leave
		}
	}
}

//*********END OF CARL ORDER-TAKER FUNCTION*********
//****************************************************



//*********CARL WAITER FUNCTION*********
//**************************************
void carlWaiter(int waiterNumber)
{
	// Since waiter doesn't know what to do initially , hence it will 
	//acquire a lock and start waiting for Manager Signal tp start

	while(true)
	{
		// variable to keep a track of whether any customer is free or not
		int myCustomer = -1;

		// Waiter is acquiring the lock on which all waiter which are free are waiting
		lockWaitingWaiter->Acquire();
	
		// Waiter waits for manager to signal 
		// If someone is waiting manager will signal this lock 
		// to wakeup waiter
		// IMP TO READ - We are not using any Monitor variable till now.
		// Can be used here before wait ?????
		cvWaitingWaiter->Wait(lockWaitingWaiter);
	
		// Change the waiter status to Busy
		waiterStatus[waiterNumber] = 1;

		//When waiter receives a signal above he starts scanning the waiter array 
		restaurantEatInLock->Acquire();
	
		// Release the waiting lock as I am invoked to serve customer
		lockWaitingWaiter->Release();

		//  Scan the status of all customers & see who is waiting for service
		for(int i=0;i<numberOfCustomers; i++)
		{
			// Check if customer is waiting for service
			// After gettimg the first required customer waiter will start serving him
			if(customerEatInStat[i]==0)			// 0 customer is waiting, 1 represents customer is served
			{		
				// Make customer status served
				customerEatInStat[i] = 1;

				// Take customer number in local waiterTaker variable
				myCustomer = i;

				// Enter the waiter information in customer's data & orderTaker data
				customerData[i].waiterIdentifier = waiterNumber;
				orderTakerData[customerData[i].orderTakerIdentifier].waiterIdentifier=waiterNumber;
				
				// Take the customer token from customer & keep it
				waiterData[waiterNumber].customerToken = i;

				// Ask for token number from orderTaker
				//cout <<"Waiter asking for token"<<endl;
				cvRestaurantEatIn[i]->Signal(restaurantEatInLock);

				// Print the simulation message
				cout<<"Waiter ["<<waiterNumber<<"] got token number["<<waiterData[waiterNumber].customerToken<<"] for Customer ["<<i<<"] from OrderTaker ["<<customerData[i].orderTakerIdentifier<<"]"<<endl;

				// Break from the loop once we get a waiting customer
				break;
			}
		}

		// Check if waiter got any customer or not
		if (myCustomer == -1)
		{
			// No customer was waiting
			// Simply go back & sleep. Release the lock & simply continue
			restaurantEatInLock->Release();
			continue;
		}

		// Grab the orderTaker waiting for order & for ordertaker's signal
		//lockWaitingOrderTaker[waiterIdentifier]->Acquire();
		lockWaitingOrderTaker[myCustomer]->Acquire();

		//release the lock after checking the value of eat in.
		restaurantEatInLock->Release();

		// Wait for orderTaker to get food signal
		// on receiving the broadcast signal it will finally acquire the lock **** TRYING TO WAIT ON CUSTOMER NO AS WAITER IDEN NOT AVAILABLE FR CUST.
		//cvWaitingOrderTaker[waiterIdentifier]->Wait(lockWaitingOrderTaker[waiterIdentifier]);
		//cout <<"Waiting gone on wait for orderTaker"<<endl;
		cvWaitingOrderTaker[myCustomer]->Wait(lockWaitingOrderTaker[myCustomer]);


		// Acquire the waiting customer lock
		//lockWaitingCustomer[waiterIdentifier]->Acquire();
		lockWaitingCustomer[myCustomer]->Acquire();

		// Release the ordertaker lock once got food signal
		lockWaitingOrderTaker[myCustomer]->Release();

		// Match the token to confirm customer
		cout<<"Waiter ["<<waiterNumber<<"] validates the token number for Customer ["<<waiterData[waiterNumber].customerToken<<"]"<<endl;


		if(waiterData[waiterNumber].orderTakerToken == waiterData[waiterNumber].customerToken)
		{
			// Signal the customer that food is ready
			cvWaitingCustomer[myCustomer]->Signal(lockWaitingCustomer[myCustomer]);
			
			// Print the simulation message
			cout<<"Waiter ["<<waiterNumber<<"] serves food to Customer ["<<waiterData[waiterNumber].customerToken<<"]"<<endl;

			// Release the lock
			lockWaitingCustomer[myCustomer]->Release();
		}
		else
		{
			continue;
		}
	}
}




//*********END OF CARL WAITER FUNCTION*********
//*********************************************


//*********CARL MANAGER FUNCTION*********
//**************************************
void carlManager (int manager)
{
	while(true)
	{
		for(int j=0; j<500; j++)
		{
			// Give chance to other threads to run
			currentThread->Yield();
		}
		//cout <<"Manager called"<<endl;
		//Manager has multiple tasks to do.
		// Here we are deviding every task & manager will try to accomplish all of them while wandering around

		//****** MANAGER TASK 1 - Waking up any orderTaker if they are on break & customers ware waiting
		// Acquire the line lock as manager will keep a watch on line also to see if some customer is waiting
		// from long.
		//lockCustomerLine->Acquire();
		//cout <<"Manager : Lock lockCustomerLine acquired"<<endl;

		// Call orderTaker waking up function
		//wakeUpOrderTaker();

		// Release the lock acquired for Customer Line watching
		//lockCustomerLine->Release();
	
		// Give chance to other threads to run
		//currentThread->Yield();

		// Yield the thread for some time 
		//for(int j=0; j<2; j++)
		//{
			// Give chance to other threads to run
			//currentThread->Yield();
		//}

		// **** MANAGER TASK-2 Waking up waiters if any customer is waiting to get served
		// This will also be done by simply scanning the status of customers & signal the waiters

		//To Scan the status of customers get customer scan lock & start scanning 
		restaurantEatInLock->Acquire();

		// Call the waiter waking up function & check in that function only if any customer needs service
		wakeUpWaiter();
		
		/// ***** TEMP TESTING
		//lockCustomerLine->Acquire();

		//Release the lock 
		restaurantEatInLock->Release();

		// Give chance to other threads to run
		//currentThread->Yield();
		
		// Yield the thread for some time 
		for(int j=0; j<50; j++)
		{
			// Give chance to other threads to run
			currentThread->Yield();
		}

		/// ***** TEMP TESTING
		//lockCustomerLine->Acquire();

		// Call orderTaker waking up function
		//wakeUpOrderTaker();

		// Release the lock acquired for Customer Line watching
		//lockCustomerLine->Release();
		
		//In order for this to work, an ordertaker has to be available. In the beginning of their while loop
		//they check to see if the manager is requesting the cash amount. This is from one of the class emails.
		checkFood();
	}
}

// Function used to wakeup the ordertakers when they go on sleep
// This function will be called from manager function & will wake up all the ordertakers who
// are sleeping & if there is a customer in line
void wakeUpWaiter()
{
	// "restaurantEatInLock"Lock is already acquired in the calling function

	//  Scan the status of all customers & see who is waiting for service
	for(int i=0;i<numberOfCustomers; i++)
	{
		// Check if customer is waiting for service
		// After gettimg the first required customer waiter will start serving him
		if(customerEatInStat[i]==0)			// 0 customer is waiting, 1 represents customer is served
		{		
			// Waiter is acquiring the lock on which all waiter which are free are waiting
			lockWaitingWaiter->Acquire();

			//Release the lock 
			restaurantEatInLock->Release();
	
			// Waiter waits for manager to signal 
			// If someone is waiting manager will signal this lock 
			// to wakeup waiter
			cvWaitingWaiter->Broadcast(lockWaitingWaiter);

			// Simple release the lock after waking up all waiter
			lockWaitingWaiter->Release();

			//To Scan the status of customers get customer scan lock & start scanning 
			// NEED TO REMOVE FROM THIS PLACE---JUST FR TESTING AS DOWN IT IS GETTING RELEASED
			restaurantEatInLock->Acquire();

			// Break from the loop as waiters were woken uo
			break;
		}
	}
}


// Function to wakeup orderTaker
void wakeUpOrderTaker()
{
	// Look if some customer is waiting in line & no ordertaker there
	// tell ordertaker to go & serve them
	if (customerLineLength > 0)
	{
		//cout <<"Manager : Line greater than 1"<<endl;
		// Check if some order taker is on break & available then call ordertaker from break
		// Check the status of all order takers
		for (int i=0; i<numberOfOrderTakers; i++)
		{
			// Check the status of order taker
			if (orderTakerStatus[i] == 0)	// Order Taker is available
			{
				// Signal all the orderTaker to wakeUp & Serve customers
				//cout <<"Manager waking up customer"<<endl;
				cvOrderTakerWakeUp->Broadcast(lockCustomerLine);
				
				// Break on first available orderTaker
				break;
			}
		}
	}
}

void orderFoodThread()
{
	//Takes 5 times the amount of something to cook
	for(int i = 0; i < 25;i++)
		currentThread->Yield();
		
	//When a shipment comes in.
	lockStoredFood.Acquire();
	for(int i = 0; i< 5;i++)
	{
		storedFood[i] += 15;
	}
	printf("Inventory is loaded in the restaurant\n");
	orderedFood = false;
	lockStoredFood.Release();
}

void checkFood()
{
	//Checks if food is already ordered if its not then check quantities. If something is under 5, order 15 to all.
	lockStoredFood.Acquire();
	char* threadName;
	
	if(!orderedFood)
	{
		for(int i = 0; i < 5;i++)
		{
			if(storedFood[i] < 5)
			{
				
				orderedFood = true;
				askForCash = true;
				//Check money
				while(askForCash)
					currentThread->Yield();
					
				if(managerCash < 100)
				{
					printf("Manager goes to bank to withdraw the cash\n");
					currentThread->Yield();
					currentThread->Yield();
					managerCash += 100;
				}
				
				//****Implement!****

				//Send shipment off
				printf("Manager refills the inventory\n");
				threadName = new char[25];
				sprintf(threadName,"Order_Food_%d",i);
				Thread *newOrderThread = new Thread(threadName);
				newOrderThread->Fork((VoidFunctionPtr)orderFoodThread, 0);
				lockStoredFood.Release();
				managerCash -= 100;
				cash = managerCash;
				return;
			}
		}	
	}
	lockStoredFood.Release();
}





// *****************************************************
//******************************************************
//            TESTSUIT TO RUN CONTINUING TESTCASES
//******************************************************
//******************************************************

void carlsJrTestSuit ()
{
	// This is a test main test function which will call all testcases in a continuing way
	//testCase1();

	// Test for testing multiple customer interaction
	//testCase2();

	// Test for testing eatIn customer-ordertaken-waiter-manager interaction
	testCase3();
}

// SetUp function which will call all setup functions to set up the things individually
void setupSim()
{
	// Call the var setUp function
	setUpLocksCVVar();

	// Call the waiter function
	//setUpCarlManager();

	// Call the waiter function
	//setUpCarlWaiter();

	// Call OrderTaker setup
	setUpCarlOrderTaker();

	// Call Customer Setup
	setupCarlCustomer();

	// Call the waiter function
	setUpCarlWaiter();

	// Call the waiter function
	setUpCarlManager();
	
	//initialize some global buffers
	for(int i = 0; i < 5;i++)
	{
		storedFood[i] = 3;
		cookedFood[i] = 0;
		queuedFood[i] = 0;
	}
}



// Testcase 1
// Test testcase will run a simple customer-ordertaker interaction
// In this test a customer simply goes to an ordertaken & asks for a food which is alreday ready
// Ordertaken will simple pack the food & provide it to the customer & customer leaves the place
void testCase1()
{
	cout <<endl;
	cout <<endl;
	cout <<"*******************************************************************"<<endl;
	cout <<" START OF TESTCASE CASE FOR 1-1 CUSTOMER - ORDERTAKER INTERACTION"<<endl;
	cout <<endl;
	// Fill customer choices
	//restaurantCapacity = 50;
	for (int i=0; i<50; i++)
	{
		customerData[i].eatIn = 0;
		customerData[i].dollar6Burger = 1;
		customerData[i].dollar3Burger = 1;
		customerData[i].veggieBurger = 0;
		customerData[i].frenchFries = 0;
		customerData[i].soda = 1;
		customerData[i].customerIdentifier = -1;
		customerData[i].orderTakerIdentifier = -1;
		customerData[i].waiterIdentifier = -1;
	}
	
	// Setup fucntion called
	setupSim();
}


// Testcase 2
// Test testcase will run a simple customer-ordertaker interaction for Multiple customers [5] & 3 OrderTakers
// In this test a customer simply goes to an ordertaken & asks for a food which is alreday ready
// Ordertaken will simple pack the food & provide it to the customer & customer leaves the place
void testCase2()
{
	cout <<endl;
	cout <<endl;
	cout <<"*******************************************************************"<<endl;
	cout <<" START OF TESTCASE CASE FOR MULTIPLE CUSTOMER - ORDERTAKER INTERACTION"<<endl;
	cout <<endl;

	// Set the no. of customers
	numberOfCustomers = 5;
	numberOfOrderTakers = 3;
	// Fill customer choices
	// Customer 1
	customerData[0].eatIn = 1;
	customerData[0].dollar6Burger = 0;
	customerData[0].dollar3Burger = 1;
	customerData[0].veggieBurger = 1;
	customerData[0].frenchFries = 0;
	customerData[0].soda = 1;
	customerData[0].customerIdentifier = -1;
	customerData[0].orderTakerIdentifier = -1;
	customerData[0].waiterIdentifier = -1;

	customerData[1].eatIn = 1;
	customerData[1].dollar6Burger = 0;
	customerData[1].dollar3Burger = 1;
	customerData[1].veggieBurger = 1;
	customerData[1].frenchFries = 0;
	customerData[1].soda = 1;
	customerData[1].customerIdentifier = -1;
	customerData[1].orderTakerIdentifier = -1;
	customerData[1].waiterIdentifier = -1;

	customerData[2].eatIn = 1;
	customerData[2].dollar6Burger = 0;
	customerData[2].dollar3Burger = 1;
	customerData[2].veggieBurger = 1;
	customerData[2].frenchFries = 0;
	customerData[2].soda = 1;
	customerData[2].customerIdentifier = -1;
	customerData[2].orderTakerIdentifier = -1;
	customerData[2].waiterIdentifier = -1;

	customerData[3].eatIn = 1;
	customerData[3].dollar6Burger = 0;
	customerData[3].dollar3Burger = 1;
	customerData[3].veggieBurger = 1;
	customerData[3].frenchFries = 0;
	customerData[3].soda = 1;
	customerData[3].customerIdentifier = -1;
	customerData[3].orderTakerIdentifier = -1;
	customerData[3].waiterIdentifier = -1;

	customerData[4].eatIn = 1;
	customerData[4].dollar6Burger = 0;
	customerData[4].dollar3Burger = 1;
	customerData[4].veggieBurger = 1;
	customerData[4].frenchFries = 0;
	customerData[4].soda = 1;
	customerData[4].customerIdentifier = -1;
	customerData[4].orderTakerIdentifier = -1;
	customerData[4].waiterIdentifier = -1;
	

	// Setup fucntion called
	setupSim();
}


// Testcase to show custoemr goin to eatIn
void testCase3()
{
	cout <<endl;
	cout <<endl;
	cout <<"*********************************************************************************"<<endl;
	cout <<" START OF TESTCASE CASE FOR EAT-IN CUSTOMER-ORDERTAKER-WAITER-MANAGER INTERACTION"<<endl;
	cout <<endl;
	
	// Setup fucntion called
	setupSim();

	// Fill the customer data
	customerData[0].eatIn = 1;
	customerData[0].dollar6Burger = 1;
	customerData[0].dollar3Burger = 0;
	customerData[0].veggieBurger = 0;
	customerData[0].frenchFries = 0;
	customerData[0].soda = 1;
	customerData[0].customerIdentifier = -1;
	customerData[0].orderTakerIdentifier = -1;
	customerData[0].waiterIdentifier = -1;

	customerData[1].eatIn = 1;
	customerData[1].dollar6Burger = 1;
	customerData[1].dollar3Burger = 0;
	customerData[1].veggieBurger = 0;
	customerData[1].frenchFries = 0;
	customerData[1].soda = 1;
	customerData[1].customerIdentifier = -1;
	customerData[1].orderTakerIdentifier = -1;
	customerData[1].waiterIdentifier = -1;

	customerData[2].eatIn = 1;
	customerData[2].dollar6Burger = 1;
	customerData[2].dollar3Burger = 0;
	customerData[2].veggieBurger = 0;
	customerData[2].frenchFries = 0;
	customerData[2].soda = 1;
	customerData[2].customerIdentifier = -1;
	customerData[2].orderTakerIdentifier = -1;
	customerData[2].waiterIdentifier = -1;

}





