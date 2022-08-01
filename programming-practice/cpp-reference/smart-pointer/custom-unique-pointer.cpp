#include <iostream>
using namespace std;

template <class T>
class unique_ptr
{
	T *ptr;

	public:

	unique_ptr(T val)
	{

		ptr = new T;
		*ptr = val;

	}

	T operator * ()
	{

		return *ptr;
	}

	unique_ptr(T &o)
	{

		ptr = *o.ptr;
		o.ptr = NULL;
	}


	~unique_ptr()
	{

		if (ptr != NULL)
		{
			delete ptr;
			ptr = NULL;
		}
	}

};

int main()
{

	unique_ptr<int> up(10);

	cout << *up << endl;

	unique_ptr<int> up2 = up;

	cout << *up2 << endl;

	return 0;
}

