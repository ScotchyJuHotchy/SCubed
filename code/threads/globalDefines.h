#define CUSTOMERS 6
#define COOKS 5
#define ORDERTAKERS 1

//food types
#define SIX_DOLLAR 0
#define THREE_DOLLAR 1
#define VEGGIE_BURGER 2
#define FRIES 3
#define SODA 4


//shared lists



extern int queuedFood[5];
extern int storedFood[5];
extern int cookedFood[5];
extern Lock lockQueuedFood;
extern Lock lockCookedFood;
extern Lock lockFoodStored;
 


extern bool orderTakerReadyState[ORDERTAKERS];   /// Can be added as define in global define

// Global Variables
// Lock to implement seperate lines
extern Lock *lockNewCustomerLine[];

// Condition variables to tell customer that order taker is ready 
//extern Condition *cvOrderTakerReadyStat[];

// Lock to implement seperate lines
extern Lock *lockInventoryCheck[];

// Lock to implement seperate lines
//extern Lock *lockFoodBagging[];

// Condition variables to tell customer that order taker is ready 
extern Condition *cvOrderTakerReadyStat[];

// Condition variables to tell customer that order taker is ready 
extern Condition *cvFoodNotReady[];

extern Condition *cvInventoryFill[];
extern int orderTakerStatus;
extern bool customerState[30];   // Can be taken from global defines later on

// Line lenghth variable
extern int lineLength;

extern bool foodNotReady;
extern int foodAvailable; 