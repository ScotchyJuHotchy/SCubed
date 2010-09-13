#include "carlCook.h"
#include "globalDefines.h"
carlCook::carlCook(char* debugname)
{
	onBreak = true;
	name = debugname;
	cookType = 10;
}

void carlCook::goWork(int newFood)
{
	onBreak = false;
	cookType = newFood;
	printf("%s returned from break.\n",name);
}


void carlCook::goBreak()
{
	
	onBreak = true;
	cookType = 10;
	printf("%s is going on break.\n",name);
	
}

void carlCook::cookFood()
{
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






