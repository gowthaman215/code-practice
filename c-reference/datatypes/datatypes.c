#include <stdio.h>
#include <stdint.h>

int main()
{
	// testValue
	unsigned long long testValue     = 0xFFFFFFFFFFFFFFFF; // 18446744073709551615
	printf("unsigned long long testValue = %llu \n", testValue);
	
	// 1 byte -> [0-255] or [0x00-0xFF]
	uint8_t         number8     = testValue; // 255
	printf("uint8_t = %u \n", number8);
	
	unsigned char    numberChar    = testValue; // 255
	printf("unsigned char = %u \n", numberChar);
	
	// 2 bytes -> [0-65535] or [0x0000-0xFFFF]
	uint16_t         number16     = testValue; // 65535
	printf("uint16_t = %u \n", number16);
	
	unsigned short    numberShort    = testValue; // 65535
	printf("unsigned short = %u \n", numberShort);

	// 4 bytes -> [0-4294967295] or [0x00000000-0xFFFFFFFF]
	uint32_t         number32     = testValue; // 4294967295
	printf("uint32_t = %u \n", number32);
	
	unsigned int     numberInt    = testValue; // 4294967295
	printf("unsigned int = %u \n", numberInt);

	// 8 bytes -> [0-18446744073709551615] or [0x0000000000000000-0xFFFFFFFFFFFFFFFF]
	uint64_t             number64         = testValue; // 18446744073709551615
	printf("uint64_t = %lu \n", number64);
	
	unsigned long long     numberLongLong    = testValue; // 18446744073709551615
	printf("unsigned long long = %llu \n", numberLongLong);
	
	// size_t
	size_t  size_t_max=testValue;
	printf("size_t = %lu \n", size_t_max);

	
	return 0;
}
