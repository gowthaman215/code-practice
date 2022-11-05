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

	// Copy constructor
	Point(const Point& p1)
	{       
		cout << "copy constructor called" << endl;
		x = p1.x;
		y = p1.y;
	}
        
	void print()
	{
		cout << "(x,y) = " << "(" << x << "," << y << ")" << endl;
	}
};

int main()
{
	Point p1(10, 15); // Normal constructor is called here
	p1.print();
	
	
	//Point p2 = p1; // Copy constructor is called here
	Point p2(p1); // Copy constructor is called here
	p2.print();

	return 0;
}

