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


template <class T>
class SmartPtr {
	T* ptr; // Actual pointer
public:
	// Constructor: Refer https:// www.geeksforgeeks.org/g-fact-93/
	// for use of explicit keyword
	explicit SmartPtr(T* p = NULL) 
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
	T& operator*() 
	{ 
		return *ptr; 
	}
	T* operator->() 
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
	SmartPtr<Rectangle> ptr(new Rectangle(10,5));
	cout << (*ptr).area() << endl;
	
	SmartPtr<Rectangle> ptr2(new Rectangle(20,10));
	cout << ptr2->area() << endl;
	

	ptr2 = ptr;
	cout << (*ptr).area() << endl;
	cout << (*ptr2).area() << endl;

	SmartPtr<int> ptr3(new int);
	*ptr3 = 20;
	cout << *ptr3 << endl;
	
	// We don't need to call delete ptr: when the object
	// ptr goes out of scope, the destructor for it is automatically
	// called and destructor does delete ptr.

	return 0;
}

