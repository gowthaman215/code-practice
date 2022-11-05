// Illustration
#include <iostream>
using namespace std;

class point
{
	private:
		double x, y;

	public:
                //no explicite definition for default construcor

		// Non-default Constructor. i.e parameterized constructor 
		point (double px, double py)
		{
			x = px, y = py;
		}
		
		void print()
		{
			cout << "(x,y)" << "(" << x << "," << y << ")" << endl;
		}
};

int main(void)
{

	// This line will cause error as compiler will not create default contructor implicitly 
	point a;  

	// Remove above line and program
	// will compile without error
	point b = point(5, 6);
	b.print();
}

