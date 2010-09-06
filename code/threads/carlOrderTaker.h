// Carls Junior Simulation for Customer

#include "stdio.h"
#include "copyright.h"
#include "thread.h"
#include "system.h"
#include "switch.h"
#include "synch.h"
#include "list.h"
#include "globalDefines.h"

#ifndef CARLORDERTAKER_H
#define CARLORDERTAKER_H

class carlOrderTaker
{
	public:
		carlOrderTaker(char* debugName);

		~carlOrderTaker();
		// Function to get the name of thread for debugging purpose
		char* getName ();

		// Function to implement orderTaker functionality
		void carlOrderTakerLockAcquire(int orderTakerNumber);

		void orderTakerReady(int orderTakerNumber);

	private:
		char * name;
	int locallineLength;
	
	public:
		//Lock *lockNewCustomerLine[5];  /// Can be added as define in global define
		   /// Can be added as define in global define

};

#endif // CARLCUSTOMER_H