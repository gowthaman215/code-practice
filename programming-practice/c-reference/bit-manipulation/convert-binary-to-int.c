// Conversion into Binary code//
#include <stdio.h>

int main()
{
	int binary_to_decimal = 0b1010;
	int octal_to_decimal = 00012;
	int hexadecimal_to_decimal = 0x000a;

	//printf("Binary number : %b\n", 0b1010);
	printf("Octal number : %o\n", 0b1010);
	printf("Decimal number : %d\n", 0b1010);
	printf("Hexa Decimal number : %x\n", 0b1010);


	printf("binary_to_decimal : %d\n", binary_to_decimal);
	printf("octal_to_decimal : %d\n", octal_to_decimal);
	printf("hexadecimal_to_decimal : %d\n", hexadecimal_to_decimal);


	return 0;
}

