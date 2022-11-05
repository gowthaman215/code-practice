/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
gowthaman215@gmail.com


arr[] = {}

A1 {'a','b','a','a','c'};
A2 {1,2,3,4,5}

out
A1 {'a', 'b', 'a', 'c'};
A2 {1,2,4,5}




*/


#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;



int main()
{
   // char carr[] = {'a', 'b', 'a', 'a', 'c'};
    //int iarr[] = {1, 2, 3, 4, 5};
    
    //char carr[] = {'a', 'a', 'b', 'a', 'a'};
    //int iarr[] = {1, 2, 3, 4, 1};
    
    char carr[] = {'a', 'a', 'b','b', 'a', 'a'};
    int iarr[] = {1, 2, 3, 9, 4, 1};
    
    int clen = sizeof(carr) / sizeof(char);
    int ilen = sizeof(iarr) / sizeof(int);

    for (int i=1; i < clen ; i++)
    {
               if(carr[i] == carr[i-1])
               {

		       //if(iarr[i-1] < iarr[i])
			 //      iarr[i-1] = iarr[i];

		       memcpy(carr+i, carr+i+1, clen-(i+1)); 
		       memcpy(iarr+i, iarr+i+1, ilen-(i+1)); 

		       clen--;
		       ilen--;
		       
		       carr[clen] = '\0';
		       iarr[ilen] = '\0';
               }

    }
    
    // display char array
    for (int i=0; i < clen ; i++)
    {
        cout << carr[i] << " ";
    }
    
    cout << endl;
    
    // display int array

    for (int i=0; iarr[i] > 0 ; i++)
    {
        cout << iarr[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}
