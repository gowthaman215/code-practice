// C++ program to demonstrate working of
// functors.
#include <bits/stdc++.h>
using namespace std;

// A Functor
class lessthan
{
private:
	int num;
public:
	lessthan(int n) : num(n) { }

	// This operator overloading enables calling
	// operator function () on objects of increment
	bool operator () (int arr_num) const {
		return arr_num < num;
	}
};

bool lessThan(int x)
{
	return x<4;
}

// Driver code
int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int res[n];
	int to_add = 2;

	//transform(arr, arr+n, arr, increment(to_add));
	
	//is the same as writing below two lines,
	// Creating object of increment
	//lessthan obj(to_add); 

	// Calling () on object
	//auto it = copy_if(arr, arr+n, res, lessthan(4)); 
	//auto it = copy_if(arr, arr+n, res, [](int x){return x<4;}); 
	auto it = copy_if(arr, arr+n, res, lessThan); 
        *(it) = -1;	
	
	//int n1 = sizeof(res)/sizeof(res[0]);

	for (int i=0; res[i] != -1; i++)
		cout << res[i] << " ";
	cout << endl;
}

