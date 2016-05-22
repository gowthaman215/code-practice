#include<stdio.h>
int main()
{
    int term;
    int i;
    i=1; term=1;
    while(term<=10)
    {
        printf("\n%d",i);
        i=i+term;
        term=term+i;
    }
    return 0;
}
