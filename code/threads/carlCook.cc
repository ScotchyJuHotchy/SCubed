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







