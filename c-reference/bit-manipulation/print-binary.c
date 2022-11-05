#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//0000 0001
//right shifting is dividing by 2
//0000 1010
//0000 0101
//0000 0010
//0000 0001
//0000 0000
//0000 0000
//0000 0000
//0000 0000


//left shifting is multiplying by 2
//0000 1010
//0001 0100
//0010 1000
//0101 0000
//1010 0000

//0001 0100 0000
//0010 1000 0000
//0101 0000 0000
char* to_binary(unsigned int d, size_t l)
{
	char* b;
	b = (char*) calloc(sizeof(char),l+1);
	memset(b, '\0', l+1);
	for(unsigned int i=0; i<l; i++)
	{
		b[l-i-1] = ((d>>i) & 1)  ? '1' : '0' ;
	}
	return b;
}


int main()
{
	int d=1;
	int l=16;
	char *b;

	while(d<65536)
	{
	b = to_binary(d,l);
	printf("%s to %d\n", b, d);
	d++;
	}

	free(b);
	b=NULL;
}

/*
2^0 = 1
2^1 = 2
2^2 = 4
2^3 = 8
2^4 = 16
2^5 = 32
2^6 = 64
2^7 = 128
2^8 = 256
2^9 = 512
2^10 = 1024
2^11 = 2048
2^12 = 4096 
2^13 = 8192
2^14 = 16384
2^15 = 32768 
2^16 = 65536 
n bits can represents 2^(n-1) values for signed type
n bits can represents 2^n values for unsigned type

*/
