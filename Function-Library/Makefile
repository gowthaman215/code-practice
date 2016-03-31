#=============================================================================================
#
#   This Makefile is specifically to make modules present in Function-Library directory
#   and also under red-hat enterprise linux operating system.
#
#=============================================================================================

#files:
#OraDBLib.cpp
#SqliteDBLib.cpp
#CplusFilesLib.cpp
#DateTimeLibrary.cpp
#StringLibrary.cpp
#NetworkingLib.cpp

#Macro Definitions 
VPATH=./ ./src ./lib/src
CC=g++

MAIN_SRC= DemoMain.cpp\
          DemoMain2.cpp
				
LIB_OBJ=	DateTimeLibrary.o\
					NetworkingLib.o\
					StringLibrary.o\
					CplusFilesLib.o


MAIN_EXE=$(MAIN_SRC:.cpp=)
#LIB_SRC=$(LIB_OBJ:.o=.cpp)

MAIN_LIB=-lpthread
USER_LIB=-lfunc

MAIN_PATH=.
MAIN_SRC_PATH=./src
MAIN_INC_PATH=./inc
MAIN_BIN_PATH=./bin
MAIN_LIB_PATH=./lib

LIB_SRC_PATH=./lib/src
LIB_INC_PATH=./lib/inc
LIB_PROC_PATH=./lib/proc

EXE_NAME=demo.exe

ORA_INC=$(ORACLE_HOME)/precomp/public
#include $(ORACLE_HOME)/precomp/lib/env_precomp.mk

ORA_LIB=$(ORACLE_HOME)/lib

CPPFLAGS= -Wno-deprecated -Wall -g -O -O2
LIBFLAGS= -shared -fPIC -D_REENTRANT -DLINUX -DMULTITHREAD

all: shared-libary $(MAIN_EXE) 

proc : 
	cd ./proc && make

.PHONY=executable archive shared-libary clean

#archive : $(LIB_OBJ)
#	 ar cr $(MAIN_LIB_PATH)/libfunc.a $(MAIN_OBJ)
#	 -rm -rf $(LIB_OBJ)

shared-libary:$(LIB_OBJ)
	 $(CC)  $(CPPFLAGS) $(LIBFLAGS) $(LIB_OBJ) -o $(MAIN_LIB_PATH)/libfunc.so 
	# -rm -rf $(LIB_OBJ)

executables:$(MAIN_EXE)

%:%.cpp
	$(CC) $(CPPFLAGS) -I$(LIB_INC_PATH) $< -o $(MAIN_BIN_PATH)/$@ -L ./lib/ $(MAIN_LIB) $(USER_LIB) 


%.o:%.cpp
	$(CC) -I$(LIB_INC_PATH) -fPIC -c $< -o $@


clean :
	-rm $(MAIN_BIN_PATH)/*
	-rm $(MAIN_LIB_PATH)/libfunc.so


