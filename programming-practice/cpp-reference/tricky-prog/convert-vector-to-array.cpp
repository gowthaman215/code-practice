#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v = {12,45,12,96,63};
	int arr[v.size()];
	
	copy(v.begin(),v.end(),arr);
	for (auto i : arr)
	{
		cout << i << endl;
	}

	vector<int> v1(arr, arr+5);
	for (auto& i : v1)
	{
		cout << i << endl;
	}

        int n=sizeof(arr) / sizeof(arr[0]);
	vector<int> v2(n);
	copy(arr, arr+n, v2.begin());
	for (auto& i : v2)
	{
		cout << i << endl;
	}
}

