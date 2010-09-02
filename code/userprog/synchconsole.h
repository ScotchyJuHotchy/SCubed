#ifndef SYNCHCONSOLE_H
#define SYNCHCONSOLE_H

class Lock;
class Condition;
class Semaphore;
class Console;

class SynchConsole
{
 public:
  SynchConsole(char*, char*);
  ~SynchConsole();
  void WriteDone();
  void ReadAvail();
  void WriteLine(char*, int);
  int ReadLine(char*, int);

 private:
  Lock* inputMutex;
  Lock* outputMutex;
  Semaphore* inputAvailable;
  Semaphore* outputDone;
  Console* console;
};
#endif
