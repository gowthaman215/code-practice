#include <bits/stdc++.h>
using namespace std;

bool binary_search(string str1, int l, int h, char ch)
{
	int m;
        cout << "binary_search("<<str1<<','<<l<<","<<m<<','<<h<<','<<ch<<')'<<endl; 	
	if(l<=h)
	{
		m = (l+h)/2;
		if(str1.at(m) == ch)
		{
			return true; 
		}
		
                if (binary_search(str1,l,m-1,ch))
			return true;
		else if (binary_search(str1,m+1,h,ch))
			return true;
		
	}
	
	return false;

}


int main()
{
string original_str = "abcdefBghiHklmAnopRqrsAtuvTwx";
string str_to_find = "BHARAT";
int n = original_str.size();
bool result=false;
//result = binary_search(original_str,0,n-1, 'T');


for(int i=0; i<str_to_find.size();i++)
{
	result = binary_search(original_str,0,n-1, str_to_find[i]);
	if(result)
		continue;
	else
		break;
}


if(result)
	cout << "found" << endl;
else
	cout << "not found" << endl;
return 0;
}
