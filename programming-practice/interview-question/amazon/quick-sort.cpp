// Idea
//
//1. Construct array to be sorted
//2. partition array with pivote 
//3. recursive call for left partition
//4. recursive call for right partition
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high)
{
	int pivot = arr[high];
	int pi = low;
	for(int i=low; i<high; i++)
	{
		if(arr[i]<pivot)
		{
		   swap(arr[pi++],arr[i]);
		}

	}

        swap(arr[pi],arr[high]);
	return pi;
}
void quick_sort(vector<int>& arr, int low, int high)
{
	if(low<high)
	{
                int pi = partition(arr,low,high);
		quick_sort(arr,low,pi-1);
		quick_sort(arr,pi+1,high);
	}
	return;
}

int main()
{
	vector<int> arr = {10,34,2,3,49,20,2,4,8};
	int n = arr.size();

	quick_sort(arr,0,n-1);

	for(auto& e : arr)
	{
		cout << e << " " ;	
	}
}
