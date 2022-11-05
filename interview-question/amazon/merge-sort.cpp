//idea 
//1. divide array into two partion based on mid till left < right
//2. merge divide array in a sorted fastion
//

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr,int low, int mid, int high)
{
	int i,j,k;
	vector<int> L1,L2;

	int n1 = mid-low;
	int n2 = high-(mid+1);
	
	cout << "\nmerge : " << low << "," << mid << "," <<high << endl;
        cout << "L1 : ";  
	for(i=0; i<=n1 ;i++)
	{
		L1.push_back(arr[low+i]); 
		cout << L1[i] << " ";
	}
        cout << endl;
        cout << "L2 : ";  
	for(i=0; i<=n2; i++)
	{
		L2.push_back(arr[mid+1+i]);
		cout << L2[i] << " ";
	}
        cout << endl;
	i=j=0;
	k=low;
        
	while(i<=n1 && j<=n2)
	{
		if(L1[i] < L2[j])
		{
			arr[k++] = L1[i++];
		}
		else
		{
			arr[k++] = L2[j++];
		}
	}
       
       if(j>n2)
       {	       
	while(i<=n1)
	{
		arr[k++] = L1[i++];
	}
       }
       else
       {
	while(j<=n2)
	{
		arr[k++] = L2[j++];
	}
       }
       
       cout << "ARR : ";  
       for(int i=low; i<high; i++)
       {
		cout << arr[i] << " " ;
       } 
       cout << endl;
}

void merge_sort(vector<int>& arr, int low, int high)
{        
	int mid = (low+high)/2;
	cout << "merge_sort : " << low << "," <<high ;
	if(low<high)
	{       cout << " --->called" << endl;
		merge_sort(arr,low,mid);
		merge_sort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
	cout << " ------>returned" << endl;

}

int main()
{
        
	vector<int> arr = {10,34,2,3,49,20,2,4,8};
	int n = arr.size();

	merge_sort(arr,0,n-1);

	for(auto& e : arr)
	{
		cout << e << " " ;	
	}
	return 0;
}
