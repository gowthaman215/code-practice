// C++ program to demonstrate working of
// functors.
#include <bits/stdc++.h>
using namespace std;

// A Functor
class increment
{
private:
	int num;
public:
	increment(int n=0) : num(n) { }

	// This operator overloading enables calling
	// operator function () on objects of increment
	int operator () (int arr_num) const {
		return num + arr_num;
	}
	
	int get()
	{
		return num;
	}
};

// Driver code
int main()
{
	increment o(5);
        cout <<  o.get() << endl;
        
	return 0;
}

