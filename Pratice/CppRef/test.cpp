#include <iostream>
#include <pthread.h>

void* mythread(void*)
{
 for(;;)
 {
    std::cout<<"this is my thread";
 }
}
int main()
{
	int a;
	/*
	printf("enter any value");
	scanf("%d", &a);
	printf("entered value is %d\n",a);*/

	pthread_t pid;
	pthread_create(&pid,NULL,mythread,NULL);
	for(;;)
	{
		std::cout<<"this is main";
	}
	return 0;
}
