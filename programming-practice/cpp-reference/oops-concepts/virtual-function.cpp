// CPP program to illustrate
// concept of Virtual Functions

#include<iostream>
using namespace std;

class base {
public:
	virtual void print() = 0;
/*
	void show()
	{
		cout << "show base class\n";
	}
*/
};

class derived : public base {
public:
	void print()
	{
		cout << "print derived class\n";
	}

	void show()
	{
		cout << "show derived class\n";
	}
};

int main()
{
	base *bptr;
	derived d;
	bptr = &d;

	

	// Virtual function, binded at runtime
	bptr->print();

	// Non-virtual function, binded at compile time
	bptr->show(); // with base class pointer we can call member function even there is no object memory created.


	base b;
	b.show();

	//base *bp = new base;
	//bp->show();
	
	return 0;
}

