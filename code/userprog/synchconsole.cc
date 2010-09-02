#include "synchconsole.h"
#include "console.h"
#include "synch.h"

void SynchConsole::WriteDone() { outputDone->V();}
void SynchConsole::ReadAvail() { inputAvailable->V();}


static void SynchReadAvail(SynchConsole *SC) { SC->ReadAvail();}
static void SynchWriteDone(SynchConsole *SC) { SC->WriteDone();}


SynchConsole::SynchConsole(char *readFile, char *writeFile)
{ 
  inputMutex = new Lock("synchronized console input mutex");
  ASSERT(inputMutex != NULL);
  inputAvailable = new Semaphore("synchronized console input semaphore",0);
  ASSERT(inputAvailable != NULL);
  outputMutex = new Lock("synchronized console output mutex");
  ASSERT(outputMutex != NULL);
  outputDone = new Semaphore("synchronized console output semaphore", 0);
  ASSERT(outputDone != NULL);
   
  console = new Console(readFile, writeFile,
(VoidFunctionPtr)SynchReadAvail, (VoidFunctionPtr)SynchWriteDone,(int) this);
}

SynchConsole::~SynchConsole()
{
  delete inputMutex;
  inputMutex = NULL;
  delete outputMutex;
  outputMutex = NULL;
  delete inputAvailable;
  inputAvailable = NULL;
  delete outputDone;
  outputDone = NULL;
  delete console;
  console = 0;
}

void
SynchConsole::WriteLine(char *line, int size)
{
  
  outputMutex->Acquire();
  while (size --) {
    console->PutChar(*line);
    line++;
    outputDone->P();
  }
  outputMutex->Release();
}

int
SynchConsole::ReadLine(char *line, int size)
{
  char c = 0;
  int num_read = 0;
  inputMutex->Acquire();
  while (c != '\n' && num_read < size) {
      inputAvailable->P();
      c = console->GetChar();
      *line = c;
      line++; num_read++;
  }
  inputMutex->Release();
  DEBUG('r', "Read the %d character string %s into buffer of size %d\n",num_read, line-num_read, size);
  return num_read;
}

