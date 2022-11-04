#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> arr, int low, int high, int d)
{
	int mid = (low+high)/2;
	
	if (low<high)
	{
		if(arr[mid] == d)
			return mid;
		else if(arr[mid] < d)
			return binary_search(arr, mid+1, high,d);
		else
			return binary_search(arr, low, mid-1,d);
	}
	return -1;
}

int main()
{

	vector<int> arr = {10,20,25,40,41,50,100};
	int n = arr.size();
	int loc = binary_search(arr,0,n-1, 11);
	if(loc != -1)
		cout << "data present at index " << loc << endl;
	else
		cout << "data doest not present" << endl;

}
