// deallocating a memory pointed by ptr causes dangling pointer
// 1. de-allocation of memory
// 2. Variable goes out of scope
// 3. function returning address of local variable.
#include <stdlib.h>
#include <stdio.h>

int *fun()
{
	// x is local variable and goes out of
	// scope after an execution of fun() is
	// over.
	int x = 5;

	return &x;
}

int main()
{
	int *ptr = (int *)malloc(sizeof(int));
        *ptr = 1;
	printf("*ptr = %d\n", *ptr);
	// after below free call, ptr becomes a dangling pointer
	free(ptr);
	printf("*ptr = %d\n", *ptr);
	// no more a dangling pointer
	ptr = NULL; // there will not be any dangling pointer if pointer is assigned to null


	//Variable goes out of scope
	int *ptr1;
	if(1) 
	{
		int ch;
		ch=2;
		ptr1 = &ch;
		printf("*ptr1 = %d\n", *ptr1);
	} 

	printf("*ptr1 = %d\n", *ptr1);
	// here ptr1 is dangling pointer

	int *ptr2 = fun();
	printf("*ptr2 = %d\n", *ptr2);

	// here ptr2 is dangling pointer 

}

