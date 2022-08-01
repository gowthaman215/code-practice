/*
 * when object is assigned to another object, bitwise copy gets created, if no assignment operator overloaded function is defined.
*/


#include <iostream>
using namespace std;

class Point {
private:
	int x, y;

public:

	Point()
	{
		cout << "default constructor called" << endl;
		x=y=0;
	}

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

	Point p3;
	p3.print();

	p3 = p2; //bitwise copy gets created. as no assignment operator overloading function is defined..
	p3.print();

	return 0;
}

