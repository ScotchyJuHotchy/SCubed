#define CUSTOMERS 6
#define ORDERTAKERS 1


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

extern int orderTakerStatus;
extern bool customerState[30];   // Can be taken from global defines later on

// Line lenghth variable
extern int lineLength;

extern bool foodNotReady;