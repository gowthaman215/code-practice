// C++ code to print all possible
// subsequences for given array using
// recursion
#include <bits/stdc++.h>
using namespace std;



// Recursive function to print all
// possible subsequences for given array
void printSubsequences(int arr[], int index,
					vector<int> &subarr,int n)
{
	// Print the subsequence when reach
	// the leaf of recursion tree
	if (index == n)
	{
		for (auto it:subarr){
		cout << it << " ";
		
		}
	if(subarr.size()==0)
		cout<<"{}";
	
	cout<<endl;
	return;

		
	}
	else
	{
	//pick the current index into the subsequence.
		subarr.push_back(arr[index]);
		printSubsequences(arr, index + 1, subarr,n);

	//	
		subarr.pop_back();
	
	//not picking the element into the subsequence.
		printSubsequences(arr, index + 1, subarr,n);
	}
	
}


void powerSet(int arr[], int index,vector<int> &subarr,int n, vector<vector<int>>& res)
{
	// Print the subsequence when reach
	// the leaf of recursion tree
	cout << "PowerSet Called " << index << "," << n << endl;
	if (index == n)
	{
	res.push_back(subarr);
	cout << "PowerSet Returned " << index << "," << n << endl;
	return;
	}
	else
	{
	
	for_each(subarr.begin(),subarr.end(),[](int x){cout << x << " ";}); cout << endl;	
	subarr.push_back(arr[index]);
	powerSet(arr, index + 1, subarr,n,res);

	subarr.pop_back();
	
	for_each(subarr.begin(),subarr.end(),[](int x){cout << x << " ";}); cout << endl;	
	//not picking the element into the subsequence.
	powerSet(arr, index + 1, subarr,n,res);
	}
	
}

// Driver Code
int main()
{
	int arr[]={1, 2, 3};
	int n=sizeof(arr)/sizeof(arr[0]);
	vector<int> vec;
	vector<vector<int>> res;
	

	//printSubsequences(arr, 0, vec,n);
	powerSet(arr, 0, vec,n,res);

	for(auto& v : res)
	{
		for(auto& e: v)
			cout << e << " ";
		cout << endl;
	}

	return 0;
}

// This code is contributed by
// vivekr4400

