#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<int,int> m(make_pair(10,10));
	map<int,int> m1 = { 
				{1,1},
				{2,2}
			  };

       
        

	
	for(auto i=m1.begin(); i != m1.end(); i++)
	{
		cout << "[" << i->first << "," << i->second << "]" << endl;
	}



	return 0;
}
