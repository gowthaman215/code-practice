#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

char* to_binary(unsigned int d, size_t l);
int main()
{
	//& (bitwise AND)
	//| (bitwise OR) 
	//^ (bitwise XOR - The result of XOR is 1 if the two bits are different
	//<< (left shift) - left shifts the bits of the first operand, the second operand decides the number of places to shift.
	//>> (right shift) - right shifts the bits of the first operand, the second operand decides the number of places to shift.
	//~ (bitwise NOT)

	const size_t bits = 8;
	int a = 5, b = 9;
	// a = 5(00000101), b = 9(00001001)

	// The result is 00000001
	cout<<"a = " << to_binary(a, bits) <<","<< " b = " << to_binary(b, bits) <<endl;
	cout << "a & b = " << to_binary((a & b), bits) << endl;

	// The result is 00001101
	cout << "a | b = " << to_binary((a | b), bits) << endl;

	// The result is 00001100
	cout << "a ^ b = " << to_binary((a ^ b), bits) << endl;

	// The result is 11111010
	cout << "~a = " << to_binary((~a), bits) << endl;

	// The result is 00010010
	cout<<"b << 1" <<" = "<< to_binary((b << 1), bits) <<endl;

	// The result is 00000100
	cout<<"b >> 1 "<<"= " << to_binary((b >> 1), bits) <<endl;
	return 0;	
}


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
