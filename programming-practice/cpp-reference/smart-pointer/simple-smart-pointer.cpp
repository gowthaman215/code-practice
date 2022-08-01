#include <iostream>
using namespace std;

class SmartPtr {
	int* ptr; // Actual pointer
public:
	// Constructor: Refer https:// www.geeksforgeeks.org/g-fact-93/
	// for use of explicit keyword
	explicit SmartPtr(int* p = NULL) 
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
	int& operator*() 
	{ 
		return *ptr; 
	}
	void operator=(SmartPtr &ptr)
	{ 
		*this->ptr = *ptr;
	    	
	}
};

int main()
{
	SmartPtr ptr(new int());
	*ptr = 20;
	cout << *ptr << endl;
	
	SmartPtr ptr2(new int());
	*ptr2 = 40;
	cout << *ptr2 << endl;
	

	ptr2 = ptr;
	cout << *ptr << endl;
	cout << *ptr2 << endl;

	// We don't need to call delete ptr: when the object
	// ptr goes out of scope, the destructor for it is automatically
	// called and destructor does delete ptr.

	return 0;
}

