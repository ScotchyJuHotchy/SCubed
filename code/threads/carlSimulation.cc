// File for simulating carls junior

#include "copyright.h"
#include "carlCustomer.h"
#include "carlOrderTaker.h"
#include "carlCook.h"
#include "carlManager.h"
#include "globalDefines.h"
#include "stdlib.h"

// Lock & Condition variable for ordertakers to deal with customers in Line
Lock *lockNewCustomerLine[ORDERTAKERS];
Lock *lockInventoryCheck[ORDERTAKERS];
//Lock *lockFoodBagging[ORDERTAKERS];
Condition *cvOrderTakerReadyStat[ORDERTAKERS];

// Condition variable for food not ready
Condition *cvFoodNotReady[ORDERTAKERS];
Condition *cvInventoryFill[ORDERTAKERS];

carlCustomer *customer=new carlCustomer("customer");
carlOrderTaker *orderTaker=new carlOrderTaker("orderTaker");

//shared lists
int queuedFood[5];
int storedFood[5];
int cookedFood[5];
char* foodStrings[5] = {"6 Dollar Burger","3 Dollar Burger","Veggie Burger","French Fries","Soda"}
bool orderedFood = false;
Lock lockQueuedFood("queuedFood");
Lock lockCookedFood("cookedFood");
Lock lockStoredFood("storedFood");
Condition cvCookBreak("cookBreak");
Lock lockCookBreak("lockCookBreak");


//I need to not hard code this -Scott
carlCook* mCooks[10];

int cookNumber = 0; //used to give cooks their number


// Variable to keep track of line length
int lineLength;

bool foodNotReady = false;
int foodAvailable  = 3;

// Function declaration for new customer
void createCustomer (int customerNumber);
void createCook(int cookNumber);

// Function to create order taker locks
void createOrderTakerLocks ();

// Function to create order taker condition variables
void createOrderTakerCV();

// Function to create order taker
void createOrderTaker (int orderTakerNumber);


//Thread fo cooks
void carlCookThread();
void carlManagerThread();

// Main function which will take care of all objects & threads
void carlsJuniorSim ()
{
	// Character pointers used for unique names
	char *name;
	for(int i = 0; i < 5;i++)
	{
		storedFood[i] = 15;
		cookedFood[i] = 0;
		queuedFood[i] = 0;
	}
	

	// Create order takers for taking orders
	createOrderTakerLocks ();
	createOrderTakerCV();
	
	DEBUG('u', "Creating new costomer\n");

	// Creating customers
	for (int i=0; i<CUSTOMERS; i++)
	{
		//customer->newCustomer(i);
		name = new char[25];
		sprintf(name,"newCustomer_%d",i);
		Thread *newCustomerThread = new Thread(name);
		++(lineLength);
		newCustomerThread->Fork((VoidFunctionPtr)createCustomer, i);

	}

	// Creating order takers
	for (int j=0; j<ORDERTAKERS; j++)
	{
		//lineLength[j] = 0;
		//customer->newCustomer(i);
		name = new char[25];
		sprintf(name,"newOrderTaker_%d",j);
		Thread *newOrderTakerThread = new Thread(name);

		newOrderTakerThread->Fork((VoidFunctionPtr)createOrderTaker, j);

	}
	
	//Create some cooks	
	for(int i=0;i<COOKS;i++)
	{
			name = new char[25];
			sprintf(name,"Cook_%d",i);
			mCooks[i] = new carlCook(name);
	}
	
	//Create some cook threads
	for(int i=0;i<COOKS;i++)
	{
		
		name = new char[25];
		sprintf(name,"newCookThread_%d",i);
		Thread *newCookThread = new Thread(name);
		newCookThread->Fork((VoidFunctionPtr)carlCookThread, i);
	
	}
	
	Thread *managerThread = new Thread("Manager Thread");
	managerThread->Fork( (VoidFunctionPtr)carlManagerThread,0);
	

}

void printCookedFood()
{
	lockCookedFood.Acquire();
	for(int i = 0;i < 4; i++)
		printf("In food number %d amount of cooked food is %d\n",i,cookedFood[i]);	
	lockCookedFood.Release();
}

void printStoredFood()
{
	lockStoredFood.Acquire();
	for(int i = 0;i < 4; i++)
		printf("In food number %d amount of stored food is %d\n",i,storedFood[i]);
	lockStoredFood.Release();
}


//this is so the manager doesn't have to worry about which Cook just was released from wait
//he can give a cook a job
int getOnBreakCook()
{
	
	lockCookBreak.Acquire();
	cvCookBreak.Signal(&lockCookBreak);
	lockCookBreak.Release();
	currentThread->Yield();
	while(1)
	{
		for(int i =0; i < COOKS;i++)
		{
		
			if(mCooks[i]->onBreak == true && mCooks[i]->cookType == 9)
			{
				printf("Manager informs %s to cook %s", mCooks[i]->name,foodStrings[mCooks[i]->cookType]);
				return i;
			}
		}
	}
	return -1;
}

void checkFood(int quantity)
{
	//Checks if food is already ordered if its not then check quantities. If something is under 5, order 15 to all.
	lockFoodStored->Acquire();
	if(!orderedFood)
	{
		for(int i = 0; i < 5;i++)
		{
			if(foodStored[i] < 5)
			{
				//Check money
				
				//****Implement!****
				
				//Send shipment off
				printf("The manager sent a shipment off\n");
				name = new char[25];
				sprintf(name,"",i);
				Thread *newOrderThread = new Thread(name);
				newOrderThread->Fork((VoidFunctionPtr)orderFoodThread, 0);
				orderedFood = true;
				
			}
		}
		lockFoodStored->Release();
		
	}
}

void orderFoodThread()
{
	//Takes 5 times the amount of something to cook
	for(int i = 0; i < 25;i++)
		currentThread->Yield();
		
		
	//When a shipment comes in.
	lockFoodStored->Acquire();
	for(int i = 0; i< 5;i++)
	{
		foodStored[i] += 15;
	}
	printf("The shipment came in!\n");
	orderedFood = false;
	lockFoodStored->Release();
}

//This is the manager thread
void carlManagerThread()
{
	carlManager mManager("managerClass");
	int cookOnBreak = 0; 
	
	for(int i=0;i < 5;i++)
	{
	
		
		
		//get a cook and give him a job
		cookOnBreak = getOnBreakCook();
		mCooks[cookOnBreak]->goWork(i);
		
		for(int j = 0; j< 5;j++)
		{
			currentThread->Yield();
		}	
			
		//this is testing out the functionality to put a cook on break
		lockCookedFood.Acquire();
		if(cookedFood[0] > 5 && mCooks[0]->onBreak == false)
		{
			mCooks[0]->goBreak();
		}
	
		lockCookedFood.Release();
	
			
	}

	//Checks if food needs to be ordered.
	checkFood();
	
	
	//puts the cook back to work who was put on break
	cookOnBreak = getOnBreakCook();
	mCooks[cookOnBreak]->goWork(0);
	
	//Yields for the simulation
	for(int j = 0; j< 150;j++)
		currentThread->Yield();
	
	//prints results.	
	printStoredFood();
	printCookedFood();
		
		

}



//each cook runs this routine
void carlCookThread()
{
	//slightly confusing, but the threads in control of mcarlCook and uses it as the cook it controls
	carlCook* mcarlCook;
	int cooknum = cookNumber; //debugging
	mcarlCook = mCooks[cookNumber++];
	
	while(1)
	{
		
		//If you are put on break go on break until released.
	
		if(mcarlCook->onBreak == true)
		{
			lockCookBreak.Acquire();
			DEBUG('u',"%s: Lock %s acquired, going on break with cv %s\n",currentThread->getName(),
			   lockCookBreak.getName(), cvCookBreak.getName());
			cvCookBreak.Wait(&lockCookBreak);
		    DEBUG('u',"%s: freed from %s\n",currentThread->getName(), cvCookBreak.getName());
			lockCookBreak.Release();
			
			//used to synch between the manager so he can find the cook which was just released
			mcarlCook->cookType = 9;
			//wait until assigned a food type
			while(mcarlCook->cookType == 9)
			{
				currentThread->Yield();
			}
			
			printf("%s is going to cook %s\n",mcarlCook->name,foodStrings[mcarlCook->cookType]);
		}
		
		//List of each types of food to be made
		lockQueuedFood.Acquire();
		if( queuedFood[mcarlCook->cookType] > 0)
		{
			queuedFood[mcarlCook->cookType]--;
		}
		lockQueuedFood.Release();
		
		//carlCook some food
		lockStoredFood.Acquire();
		if(storedFood[mcarlCook->cookType] > 0)
		{
			int tempfood = mcarlCook->cookType;
			storedFood[mcarlCook->cookType]--;
			lockStoredFood.Release();
			
			//random time to cook food
			for(int i = 0; i < rand()%5 + 1; i++)
			{
				//DEBUG('u',"cook %s yielded %d\n",mcarlCook->getName(),i);
				currentThread->Yield();
			}
			
			//make food available for order takers
			lockCookedFood.Acquire();
			cookedFood[tempfood]++; 
			lockCookedFood.Release();
		
		}
		else
		{
			//if there is no food to be cooked, wait a little to see if it comes later
			lockStoredFood.Release();
			currentThread->Yield();
		}
		
	}
	
	
}



// Function to be called for creating new customers
void createCustomer (int customerNumber)
{
	DEBUG('u', "CustomerLockAcquire called\n");
	customer->customerLockAcquire(customerNumber/6);

	// Keep track of no. of customer adding in line
	//++(lineLength);

	printf("length in main %d\n", lineLength);
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

		// Creating food bagging locks
		sprintf(name,"lockInventory_%d",j);
		lockInventoryCheck[j]= new Lock(name);
	}
}

// Function to be called for creating Condition Variables for simulating lines in front of order takers
void createOrderTakerCV ()
{
	char *name;

	for (int j=0;j<ORDERTAKERS ;j++ )
	{
		DEBUG('u', "Creating new Condition Variables for ordertaker : %d\n",j);
		name = new char[25];
		sprintf(name,"ordertakerCV_%d",j);
		cvOrderTakerReadyStat[j]= new Condition(name);

		// Initialization of food not ready CV
		sprintf(name,"foodNotReadyCV_%d",j);
		cvFoodNotReady[j]= new Condition(name);
		
		// Initialization of food not ready CV
		sprintf(name,"foodNotReadyCV_%d",j);
		cvInventoryFill[j]= new Condition(name);
		
	}
}

// Function to be called for creating OrderTaker
void createOrderTaker (int orderTakerNumber)
{
	DEBUG('u', "OrderTakerLockAcquire called\n");
	orderTaker->carlOrderTakerLockAcquire(orderTakerNumber);
	//lockNewCustomerLine[0]->Acquire();
	//while (lineLength[1] > 0)
	//{
	//	orderTaker->orderTakerReady(orderTakerNumber);
	//}
}

