#include <iostream>
#include <thread>
using namespace std;

bool flag;
std::mutex m;
void wait_for_flag()
{
	std::unique_lock<std::mutex> lk(m);

	while(!flag)
	{
		lk.unlock();
		this_thread::sleep_for(chrono::milliseconds(100));
		lk.lock();
	}
}



int main()
{


	return 0;
}
