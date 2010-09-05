#define CUSTOMERS 30
#define ORDERTAKERS 5


extern bool orderTakerReadyState[5];   /// Can be added as define in global define

// Global Variables
extern Lock *lockNewCustomerLine[];
extern int orderTakerStatus;
extern bool customerState[30];   // Can be taken from global defines later on
