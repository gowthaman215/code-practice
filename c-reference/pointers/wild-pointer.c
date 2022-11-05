//wild pointer is pointer variable which is not initialized. not even NULL.
#include<stdio.h>

int main()
{
	int *p; /* wild pointer */

	int x = 10;

	// p is not a wild pointer now
	p = &x;

	return 0;
}

