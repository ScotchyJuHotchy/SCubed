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
}


void carlCook::goBreak()
{
	
	onBreak = true;
	cookType = 10;
	
}






