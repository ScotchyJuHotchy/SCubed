
#include "stdio.h"
#include "copyright.h"
#include "thread.h"
#include "system.h"
#include "switch.h"
#include "synch.h"
#include "list.h"
#include "stdlib.h"
#include "globalDefines.h"

#ifndef CARLCOOK_H
#define CARLCOOK_H

class carlCook {
	
public:
	carlCook(char* debugname);
	bool onBreak;
	int cookType;

	void goBreak();
	char* getName()
		{return name;}
	void goWork(int newFood);
	void cookFood();	
	
private:
	char* name;
};

#endif
