#define CUSTOMERS 6
#define COOKS 5
#define ORDERTAKERS 1
#define MAX_WAITERS 5
// SCOTTS REQUIREMENT********************
//food types
#define SIX_DOLLAR 0
#define THREE_DOLLAR 1
#define VEGGIE_BURGER 2
#define FRIES 3
#define SODA 4


// Condition variables to tell customer that order taker is ready 
//extern Condition *cvFoodNotReady[];
//extern Condition *cvInventoryFill[];
//extern int orderTakerStatus;
//extern bool customerState[30];   // Can be taken from global defines later on


//
int queuedFood[5];
int storedFood[5];
int cookedFood[5];
char* foodStrings[5] = {"6 Dollar Burger","3 Dollar Burger","Veggie Burger","French Fries","Soda"};
bool orderedFood = false;
Lock lockQueuedFood("queuedFood");
Lock lockCookedFood("cookedFood");
Lock lockStoredFood("storedFood");
int cash = 0;
//Condition cvCookBreak("cookBreak");
//Lock lockCookBreak("lockCookBreak");


//************************************************************** AS PER PROF PSEUDOCODE

//**********************************************
// Global variables required by CUSTOMER
// Lock to keep track of customer waiting in line
Lock *lockCustomerLine;

// Lock to serve customers
Lock *lockOrderTakerServe[50];

// Lock to bag customers food
Lock *lockOrderTakerFoodBagged[50];

// Lock for customer who choses to eat-in
Lock *restaurantEatInLock;
Condition *cvRestaurantEatIn[50];

// Condition lock for customer waiting in line
Condition *cvCustomerWaitingLine;

// Condition lock for customer to get served
Condition *cvOrderTakerServe[50];

// Condition lock for customer to bagg his food
Condition *cvOrderTakerFoodBagged[50];

// Variable to keep total no. of customer
int numberOfCustomers;

// Variable to keep track of single line length
int customerLineLength;

// OrderTaker status
int orderTakerStatus[50];

// OrderTaker numbers
int numberOfOrderTakers;

// Structure containing customer data
struct customerInfo
{
	bool eatIn;
	bool dollar6Burger;
	bool dollar3Burger;
	bool veggieBurger;
	bool frenchFries;
	bool soda;
	int customerIdentifier;
	int orderTakerIdentifier;
	int waiterIdentifier;
} customerData[50];

// Global status for customers choosing to eatIn
int customerEatInStat[50];  // 0 represents Available, 1 busy, 2 waiting for customer

// Variable to keep track of capacity of restaurant
int restaurantCapacity = 50;

// Variable to keep track that food is ready or not
bool foodReady[50];




//******************* Variables related to Order Taker
bool foodToBag = false;
bool inventoryAvailable = true;  // This variable may need to change depending upon inventory condition

// Structure to save order Taker data
struct orderTakerInfo
{
	int customerIdentifier;
	int orderTakerIdentifier;
	int waiterIdentifier;
} orderTakerData[50];


//********************* Variables related to waiter interaction
//waiter status
//int numberOfWaiters=MAX_WAITERS;

int waiterStatus[MAX_WAITERS];    // Here 0 means available, 1 mean not available, 2 serving  

// Lock to track a waiting Waiter to server customers
Lock *lockWaitingWaiter;

//Condition variable for waiting waiter
Condition *cvWaitingWaiter;

//Lock for waiting Customer- used by ordertaker, waiter & customer
Lock *lockWaitingOrderTaker[50];

//Condition variable on which waiter will call the Signal to Customer
Condition *cvWaitingOrderTaker[50];

//Lock for waiting Customer- used by ordertaker, waiter & customer
Lock *lockWaitingCustomer[50];

//Condition variable on which waiter will call the Signal to Customer
Condition *cvWaitingCustomer[50];

//Lock for manager

Lock *lockManager;

// Structure to save order Taker data
struct waiterInfo{
	int customerToken;
	int orderTakerToken;
} waiterData[MAX_WAITERS];



//******************************
// MANAGER VARIABLES
//*****************************

// Lock used to wakeup an ordertaker if it has gone on break
//Lock *lockOrderTakerWakeUp[];

// condition variable used to wakeUp orderTaker if it has gone on break. Simply broadcast the orderTakers to come out of break
Condition *cvOrderTakerWakeUp;




