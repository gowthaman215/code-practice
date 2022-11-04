#include <bits/stdc++.h>
using namespace std;
class demo
{
	int d;
	public:
		demo()
		{
			d=0;
			cout << "default constructor called" << endl;
		}
		
		demo(int d) : d(d)
		{
			cout << "parameterized constructor called" << endl;
		}

		demo(const demo& o)
		{
			this->d = o.d;
			cout << "copy constructor called" << endl;
		}

		~demo()
		{
			cout << "destructor called" << endl;
		}
};


int main()
{
        demo a;
	demo b(10);
	demo c = 10;
	demo d = c;	
	return 0;
}
