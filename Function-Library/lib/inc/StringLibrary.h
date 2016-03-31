
#ifndef _StringLibrary_h
#define _StringLibrary_h

#include "CplusLibrary.h"
#include "PosixLibrary.h"

const char* getTokenByIndex(char* statment,char delimit, int index);
const char* readnext(char*& line,char delimit);

#endif //_StringLibrary_h

