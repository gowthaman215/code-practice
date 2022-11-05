#include <iostream>
#include <thread>
using namespace std;

void thrFun(int i)
{

	for(int k=0; k < i; k++)
	{
		cout << "this is thrFun - " << k << endl;

	}

}

int main()
{
	thread t(thrFun, 10);
	
	for(int k=0; k < 10; k++)
	{
		cout << "this is main - " << k << endl;

	}
	
	t.join();       

	return 0;
}
