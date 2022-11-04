#include <bits/stdc++.h>
using namespace std;

int main()
{
	std::map<int, int> testMap = {{1,10}, {2, 20}, {3, 30}};
	for (auto it = testMap.begin(); it != testMap.end();)
	{
		    std::cout << it->first << " " << it->second << "\n";
		    it = testMap.erase(it); 
	}
        
	cout << endl;

	std::map<int, int> testMap1 = {{1,10}, {2, 20}, {3, 30}};
	for(const auto& item : testMap1 )
	{
		    std::cout << item.first << " " << item.second << "\n";
		    testMap1.erase(item.first);
	}
	return 0;
}


