#include <bits/stdc++.h>

using namespace std;

int main()
{
	int *iptr;
	int *temp;

	iptr = new int[100];
	for(int i=0; i<100; i++)
	{
		*(iptr+i) = i;
	}
        
	//temp = iptr;
	iptr++;
	cout << *iptr << endl;

	delete[] iptr; //undefined behaviour

	return 0;
}
