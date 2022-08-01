#include<iostream>
using namespace std;

/* 

   use of this pointer
 * to retrive object's member when local variable is same as a member's name
 * to return calling object as reference in order to chain function calls. 	 

*/

class Point
{
	private:
		int x;
		int y;
	public:
			Point* setX (int x)
			{
				// The 'this' pointer is used to retrieve the object's x
				// hidden by the local variable 'x'
				this->x = x;

				//Return reference of calling object.
				return this;
			}

			Point* setY (int y)
			{
				// The 'this' pointer is used to retrieve the object's y
				// hidden by the local variable 'y'
				this->y = y;
				
				//Return reference of calling object.
				return this;
			}

			Point* print() 
			{ 
				cout << "(x,y) = (" << x << "," << y << ")" << endl; 
				
				//Return reference of calling object.
				return this;
			}
};

int main()
{
	//Point *p1 = new Point;
	Point *p1 = new Point(); //this way and above definition is same
	int x = 10;
	int y = 20;
	p1->setX(x);
	p1->setY(y);
	p1->print();
       
        	
	//Point *p2 = new Point;
	Point *p2 = new Point();
	p2->setX(2)->setY(4)->print(); //chaining function calls.
             
	return 0;
}

