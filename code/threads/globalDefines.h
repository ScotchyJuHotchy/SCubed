#define CUSTOMERS 6
#define COOKS 5
#define ORDERTAKERS 1

//food types
#define SIX_DOLLAR 0
#define THREE_DOLLAR 1
#define VEGGIE_BURGER 2
#define FRIES 3
#define SODA 4


// No of customers
extern int numberOfcustomer;
extern int numberOfOrderTakers;

extern int customerNumber;
extern int orderTakerNumber;
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

// Lock for Customer to order
extern Lock * lockCustomerOrder[];

// Lock for Customer to Serve
extern Lock * lockCustomerServe[];

// Lock for Customer to show that food is bagged
extern Lock * lockCustomerOrderBagged[];

// Condition variable to signal customer that order taker is ready
extern Condition *cvOrderTakerReady[];

// Condition variables to tell customer that order taker is ready 
extern Condition *cvCustomerOrdered[];

// Condition variable for order Ready 
extern Condition *cvOrderReady[];

// Condition variable for order Ready 
extern Condition *cvOrderPicked[];

// Line lenghth variable
extern int lineLength;

// Line length of all lines served by ordertaker
extern int orderTakerLineLength[];

// Variable which keeps track of given order
extern bool orderGiven;
extern bool foodPicked;
extern bool orderReady;

// Define an array of structures to save customer related info





// Condition variables to tell customer that order taker is ready 
extern Condition *cvFoodNotReady[];
//******************************* SCOTTS CODE*******************
extern Condition *cvInventoryFill[];
extern int orderTakerStatus;
extern bool customerState[30];   // Can be taken from global defines later on



extern bool foodNotReady;
extern int foodAvailable; 