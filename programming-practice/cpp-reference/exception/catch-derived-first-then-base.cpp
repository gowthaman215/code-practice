// C++ Program to demonstrate a catching of
// Derived exception and printing it successfully
#include <iostream>
using namespace std;

class Base {};
class Derived : public Base {};
int main()
{
	Derived d;
	// Some other functionalities
	try {
		// Monitored code
		throw d;
	}
	catch (Derived d) { //if we catch Base b here Derived d down, Derived catch will never reach
		cout << "Caught Derived Exception";
	}
	catch (Base b) {
		cout << "Caught Base Exception";
	}
	getchar(); // To read the next character
	return 0;
}

