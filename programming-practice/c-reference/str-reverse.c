#include <stdio.h>
#include <string.h>
void str_reverse(char*, int);

int main()
{

	char name[]="GoodJob"; 
	//strcpy(name,"GoodJob");
	str_reverse(name, strlen(name));
	printf("reversed string is %s\n", name);

}

void str_reverse(char* ptr, int length)
{
	char ch;

	for (int i=0; i<length/2; i++)
	{
		ch = *(ptr+i);
		*(ptr+i) = *(ptr + length - 1 - i);
		*(ptr + length - 1 - i) = ch;
	}

}

