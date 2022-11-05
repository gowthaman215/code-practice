#include <iostream>
using namespace std;

class Rectangle
{
 	private : 
		int l;
		int w;
	public :
		Rectangle (int l=0, int w=0)
		{
			this->l = l;
			this->w = w;
		}

		int area()
		{
			return l*w;
		}
};

class SmartPtr {
	Rectangle* ptr; // Actual pointer
public:
	// Constructor: Refer https:// www.geeksforgeeks.org/g-fact-93/
	// for use of explicit keyword
	explicit SmartPtr(Rectangle* p = NULL) 
	{ 
		cout << "Constructor called" << endl;
		ptr = p; 
	}

	// Destructor
	~SmartPtr() 
	{ 

		cout << "Destructor called" << endl;
		delete (ptr); 
	}

	// Overloading dereferencing operator
	Rectangle& operator*() 
	{ 
		return *ptr; 
	}
	Rectangle* operator->() 
	{ 
		return ptr; 
	}
	void operator=(SmartPtr &ptr)
	{ 
		*this->ptr = *ptr;
	    	
	}
};

int main()
{
	SmartPtr ptr(new Rectangle(10,5));
	cout << (*ptr).area() << endl;
	
	SmartPtr ptr2(new Rectangle(20,10));
	cout << ptr2->area() << endl;
	

	ptr2 = ptr;
	cout << (*ptr).area() << endl;
	cout << (*ptr2).area() << endl;

	// We don't need to call delete ptr: when the object
	// ptr goes out of scope, the destructor for it is automatically
	// called and destructor does delete ptr.

	return 0;
}

