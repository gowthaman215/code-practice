#include<stdio.h>
//making use of if-else condition while including #error directive with the appropriate compilation failed message to be displayed on the output screen
#ifndef __MATH_H
#error Please include math.h header before compiling the program
#else
//if the #error directive condition is false, then the else part containing the main method is executed which consists of three doubles variables to store double values and then make use of pow function to find the power and display the value.
int main()
{
double a = 2.0;
double b = 2.0;
double c;
c = pow(a, b);
printf("The power of a raised to b is : %lf", c);
return 0;
}
//if else condition ends here
#endif
