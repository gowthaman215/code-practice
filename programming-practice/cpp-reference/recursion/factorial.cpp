// C++ code to implement Fibonacci series
#include <bits/stdc++.h>
using namespace std;

// Function for fibonacci

int factorial(int n)
{
	// Stop condition
	if (n < 1)
		return 1;

        return (n * factorial(n-1));
}

// Driver Code
int main()
{
	// Initialize variable n.
	int n = 5;
	
	cout<< "Factorial of " << n << " is " << factorial(n) << endl;

	return 0;
}

