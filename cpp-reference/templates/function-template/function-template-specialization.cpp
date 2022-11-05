// class templates
#include <iostream>
using namespace std;

//template <class T, int N> T getPairItem(mypair<T> p);

template <class T>
class mypair 
{
	
	T first, second;
	
	public:
	mypair (T first, T second) : first(first), second(second)
	{
	}


	T getMax ()
	{
		T max;
		max = first > second ? first : second;
		return max;
	}

	T getFirst()
	{
		return first;

	}

	T getSecond()
	{
		return second;

	}
};


template <class T, int N> T getPairItem(mypair<T>& p)
{

	if(N == 1)
	{
		return p.getFirst();
	}
	else if(N = 2)
	{
		return p.getSecond();
	}
	else
	{
		return 0;
	}

}

int main () {
	mypair <int> myobject (100, 75);
	int t = getPairItem<1>(myobject);
	cout << t << endl;
	return 0;
}
