#include <iostream>
#include <vector>
using namespace std;

void printSubset(vector<int> &v, vector<vector<int>> &sv, vector<int>::iterator i)
{
	vector<int> t;
	if (i != v.end())
	{       t.assign(i,v.end());
                sv.push_back(t);
		printSubset(v, sv, i+1);
	}
}

int main()
{

	vector<int> v = {1,2,3,4,5};
	vector<vector<int>> sv;
	printSubset(v,sv,v.begin());
	
        for(auto tv : sv)
	{
		for(auto e : tv )
		{
			cout << e << " ";
		}
		cout << endl;
	}
	return 0;
}
