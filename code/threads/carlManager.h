#include "stdio.h"
#include "copyright.h"
#include "thread.h"
#include "system.h"
#include "switch.h"
#include "synch.h"
#include "list.h"
#include "globalDefines.h"


#ifndef CARLMANAGER_H
#define CARLMANAGER_H


extern carlCook* mCooks[];

class carlManager
{
	
public:
	char* name;
	carlManager(char* debugName);
	int getOnBreakCook(int foodType);
	void checkFood();
private:
	
	
};


#endif 
