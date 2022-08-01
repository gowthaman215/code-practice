/*
In C++, a Copy Constructor may be called in the following cases: 

When an object of the class is returned by value. 
When an object of the class is passed (to a function) by value as an argument. 
When an object is constructed based on another object of the same class. 
When the compiler generates a temporary object.
*/


#include <iostream>
using namespace std;

class Point {
private:
	int x, y;

public:
	Point(int x1, int y1)
	{
		cout << "parameterized constructor called" << endl;
		x = x1;
		y = y1;
	}

	//no Copy constructor
        
	void print()
	{
		cout << "(x,y) = " << "(" << x << "," << y << ")" << endl;
	}
};

int main()
{
	Point p1(10, 15); // Normal constructor is called here
	p1.print();
	
        cout << "Compiler created default copy constructor called" << endl;	
	Point p2(p1); // Compiler created Default Copy constructor is called here
	p2.print();
        
	return 0;
}

