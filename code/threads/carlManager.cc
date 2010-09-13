#include "carlManager.h"
#include "carlCook.h"




carlManager::carlManager (char * debugName)
{
	name = debugName;
}

int carlManager::getOnBreakCook(int foodType)
{
	lockCookBreak.Acquire();
	cvCookBreak.Signal(&lockCookBreak);
	lockCookBreak.Release();
	currentThread->Yield();
	while(1)
	{
		for(int i =0; i < numberOfCooks;i++)
		{
			if(mCooks[i]->onBreak == true && mCooks[i]->cookType == 9)
			{
				mCooks[i]->goWork(foodType);
				printf("Manager informs %s to cook %s\n", mCooks[i]->getName(),foodStrings[mCooks[i]->cookType]);
				return i;
			}
		}
	}
	return -1;
}

void carlManager::checkFood()
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
				//Check money
				if(cash < 100)
				{
					printf("Manager goes to bank to withdraw the cash\n");
					currentThread->Yield();
					currentThread->Yield();
					cash += 100;
				}
				
				//****Implement!****

				//Send shipment off
				printf("Manager refills the inventory\n");
				threadName = new char[25];
				sprintf(threadName,"Order_Food_%d",i);
				Thread *newOrderThread = new Thread(threadName);
				newOrderThread->Fork((VoidFunctionPtr)orderFoodThread, 0);
				lockStoredFood.Release();
				cash -= 100;
				return;
			}
		}	
	}
	lockStoredFood.Release();
}
