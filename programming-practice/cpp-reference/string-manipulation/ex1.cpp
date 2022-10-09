#include <bits/stdc++.h>

using namespace std;

string commonPrefix(string& str1, string& str2)
{
	int l = min (str1.size(), str2.size());
	string prefix="";
	
	for(int i=0; i < l; i++)
	{
		if(str1[i] != str2[i])
			break;
		else
			prefix += str1[i];
	}
	return prefix;
}

string findCommonPrefix(string strlist[], int n)
{

        string prefix = strlist[0];

	for(int i=1; i<n; i++)
	{
		prefix = commonPrefix(strlist[i],prefix);
	}
	return prefix;

}

int main()
{
	string s_arr[] = {"Geeks", "Geesforgeeks", "Gee","Ge"};
        //string prefix	= findCommonPrefix(s_arr, sizeof(s_arr) / sizeof(s_arr[0]));
        string prefix	= findCommonPrefix(s_arr, 4);
	cout << prefix << endl;
	return 0;
}
