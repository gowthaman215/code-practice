//uncaught exception leads abnormal termination

#include <iostream>
using namespace std;

int main()
{
	try {
	throw 'a';
	}
	catch (int x) {
		cout << "Caught ";
	}
	return 0;
}

