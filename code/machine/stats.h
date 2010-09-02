// stats.h 
//	Data structures for gathering statistics about Nachos performance.
//
// DO NOT CHANGE -- these stats are maintained by the machine emulation
//
//
// Copyright (c) 1992-1993 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#ifndef STATS_H
#define STATS_H

#include "copyright.h"

// The following class defines the statistics that are to be kept
// about Nachos behavior -- how much time (ticks) elapsed, how
// many user instructions executed, etc.
//
// The fields in this class are public to make it easier to update.

class Statistics {
  public:
    int64_t totalTicks;      	// Total time running Nachos
    int64_t idleTicks;       	// Time spent idle (no threads to run)
    int64_t systemTicks;	 	// Time spent executing system code
    int64_t userTicks;       	// Time spent executing user code
				            // (this is also equal to # of
				            // user instructions executed)

    int numDiskReads;		// number of disk read requests
    int numDiskWrites;		// number of disk write requests
    int numConsoleCharsRead;	// number of characters read from the keyboard
    int numConsoleCharsWritten; // number of characters written to the display
    int numPageFaults;		// number of virtual memory page faults
    int numPacketsSent;		// number of packets sent over the network
    int numPacketsRecvd;	// number of packets received over the network

    Statistics(); 		// initialize everything to zero

    void Print();		// print collected statistics
};

// Constants used to reflect the relative time an operation would
// take in a real system.  A "tick" is a just a unit of time -- if you 
// like, a microsecond.
//
// Since Nachos kernel code is directly executed, and the time spent
// in the kernel measured by the number of calls to enable interrupts,
// these time constants are none too exact.

#define UserTick 	(int64_t)1LL	// advance for each user-level instruction 
#define SystemTick 	(int64_t)10LL 	// advance each time interrupts are enabled
#define RotationTime 	(int64_t)500LL 	// time disk takes to rotate one sector
#define SeekTime 	(int64_t)500LL    	// time disk takes to seek past one track
#define ConsoleTime 	(int64_t)100LL	// time to read or write one character
#define NetworkTime 	(int64_t)100LL   	// time to send or receive one packet
#define TimerTicks 	(int64_t)100LL    	// (average) time between timer interrupts

#endif // STATS_H
