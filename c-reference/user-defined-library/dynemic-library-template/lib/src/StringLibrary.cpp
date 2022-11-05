#include "StringLibrary.h"


//==========================================================================================
//  1. gettokenbyindex : to get token in a string specified by index position
//==========================================================================================

const char* getTokenByIndex(char* statment,char delimit, int index)
{
	int count=1;
	char *token;
	token = (char*)malloc(strlen(statment));
	strcpy(token, statment);

	while(*token)
	{
		if(*token == delimit)
			count++;
		token++;
	}

	if(index>count)
		return NULL;

	strcpy(token, statment);
	for(int i=1; i<index; i++){
		token = strchr(token,delimit);
		token++;
	}

	int i=0;
	while(token[i]!=delimit && token[i]!='\0')
		i++;

	(i!=0)?token[i]='\0':token[i];

	return token;
}



//==========================================================================================
//  2. readnext : to get all tokens in a string by calling this function subsequentially
//==========================================================================================


const char* readnext(char*& line, char delimit)
{
	char *element=NULL;
	char *pos=NULL;
	pos = strchr(line,delimit);
	if(pos)
	{
		element = (char*) malloc(pos-line+1);
		strncpy(element,line,pos-line);
		line = pos + 1;
	}
	return element;
}
