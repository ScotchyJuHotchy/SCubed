// Carls Junior Simulation for Customer

#include "stdio.h"
#include "copyright.h"
#include "thread.h"
#include "system.h"
#include "switch.h"
#include "synch.h"
#include "list.h"
#include "globalDefines.h"

#ifndef CARLCUSTOMER_H
#define CARLCUSTOMER_H



class carlCustomer
{
	public:
		carlCustomer(char* debugName);

		~carlCustomer();
		// Function to get the name of thread for debugging purpose
		char* getName ();

		// Function to implement orderTaker functionality
		void customerLockAcquire(int customerNumber);

		// Function which simulates order taking of a customer
		void carlCustomer::customerFoodOrder(int customerNumber);
		
	private:
		char * name;
		int localLineLength;
		
};

#endif // CARLCUSTOMER_H