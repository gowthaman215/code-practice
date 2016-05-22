#include <iostream>
#include <pthread.h>

void* function(void*)
{
    for (;;)
        printf("this is thread\n");
}
int main()
{

    pthread_t thread1;
    pthread_attr_t attr;

    int chk;

    chk = pthread_attr_init(&attr);
    printf("attr_init: %d\n",chk);

   // chk = pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
   // printf("attr_setdetachstate: %d\n",chk);

    chk = pthread_create(&thread1, &attr, function, NULL);
    printf("pthread_create: %d\n",chk);
    pthread_join(thread1,NULL);

    return 0;

}
