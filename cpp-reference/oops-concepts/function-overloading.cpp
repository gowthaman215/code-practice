/*
In Function Overloading “Function” name should be the same and the arguments should be different.
normal function and member function can be overloaded.

How  Function Overloading works?
1. Exact match:- (Function name and Parameter)
2. If a not exact match is found:–
   ->Char, Unsigned char, and short are promoted to an int.
   ->Float is promoted to double

3. If no match found:
    ->C++ tries to find a match through the standard conversion.

4. ELSE ERROR 🙁



*/



#include <iostream>
using namespace std;

class Functionoverload
{
	public:
		void display(int i) {
			cout << " Here is int " << i << endl;
		}
		void display(double f) {
			cout << " Here is float " << f << endl;
		}
		void display(char const *c) {
			cout << " Here is char* " << c << endl;
		}
};


void print(int i) {
	cout << " Here is int " << i << endl;
}
void print(double f) {
	cout << " Here is float " << f << endl;
}
void print(char const *c) {
	cout << " Here is char* " << c << endl;
}

int main() {
        Functionoverload o;
	o.display(20);
	o.display(20.20);
	o.display("twenty");

	print(10);
	print(10.10);
	print("ten");
	return 0;
}

