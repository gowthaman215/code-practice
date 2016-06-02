#include <pthread.h>
#include <iostream>
#include <unistd.h>

using namespace std;

void* thrPrinter (void* text)
{
    char* p = (char*)text;
    printf("%s\n",p);
    for(int i=0;i<1000;i++)
    {
        printf("In printer thread\n");
        sleep(1);
    }
}

int main()
{
    pthread_t printer_thread;

    pthread_create(&printer_thread,NULL,&thrPrinter,(void*)"this is my parameter text");

    for(int i=0;i<1000;i++)
    {
        printf("In main thread\n");
        sleep(1);
    }
    return 0;

}
