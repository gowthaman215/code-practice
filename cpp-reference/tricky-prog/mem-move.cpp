/* A C program to demonstrate working of memmove */
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
	char str1[] = "Geeks"; // Array of size 100
	char str2[] = "Quiz"; // Array of size 5

	int iarr[] = {1,2,3,4,5}; // Array of size 5
	
	
	puts("str1 before memmove ");
	puts(str1);

	/* Copies contents of str2 to sr1 */
	memmove(str1, str2, sizeof(str2));

	puts("\nstr1 after memmove ");
	puts(str1);
        
	int len = strlen(str2);

	memmove(str2, str2+1, sizeof(char) * (len-1));
	str2[len-1] = '\0';
	puts("\n");
        puts(str2);
        
	int ilen = sizeof(iarr) / sizeof(int);
        cout << "length is " << ilen << endl;

	memmove(iarr, iarr+1, sizeof(int) * (ilen-1));
	iarr[ilen-1] = '\0';

	for(int i=0; iarr[i] > 0; i++)
	{
		cout << iarr[i] << " ";
	}
	cout << endl;
	
	memmove(iarr, iarr+1, sizeof(int) * (ilen-1));
	iarr[ilen-1] = '\0';

	for(int i=0; iarr[i] > 0; i++)
	{
		cout << iarr[i] << " ";
	}
	cout << endl;
	
	memmove(iarr, iarr+1, sizeof(int) * (ilen-1));
	iarr[ilen-1] = '\0';

	for(int i=0; iarr[i] > 0; i++)
	{
		cout << iarr[i] << " ";
	}
	cout << endl;


	memmove(iarr, iarr+1, sizeof(int) * (ilen-1));
	iarr[ilen-1] = '\0';

	for(int i=0; iarr[i] > 0; i++)
	{
		cout << iarr[i] << " ";
	}
	cout << endl;

	memmove(iarr, iarr+1, sizeof(int) * (ilen-1));
	iarr[ilen-1] = '\0';

	for(int i=0; iarr[i] > 0; i++)
	{
		cout << iarr[i] << " ";
	}
	cout << endl;
	
	return 0;
}

