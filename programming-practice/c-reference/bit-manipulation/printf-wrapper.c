#include <stdio.h>
#include <stdarg.h>
int printwf(const char* format,...)
{
	va_list parameters;

	va_start(parameters,format);
	vprintf(format,parameters);
	va_end(parameters);

}

int main()
{
	printwf("this is sample %d\n",10);
	
}
