#include <bits/stdc++.h>
using namespace std;

int findNoOfBeautyPair(string str)
{

	int i,j;
	set<char> L,R;
	int count=0;
	for(i=0;i<str.length()-1;i++)
	{
		for(j=0; j<=i; j++)
		{
			L.insert(str[j]);
			cout << str[j];
		}
		cout << " ";

		for(j; j<str.length(); j++)
		{
			R.insert(str[j]);
			cout << str[j];
		}

		cout << endl;

		if(L.size() == R.size())
		{
			count++;
		}

		L.clear();
		R.clear();
	}
	return count;
}

int findNoOfBeautyPair1(string str)
{

	int i;
	int N,N1, N2;
	const char *p=str.c_str();
	int count=0;
	N = str.length()-1;
	for(i=0;i<N;i++)
	{
		N1 = set<char>(p, p+i+1).size();
		N2 = set<char>(p+i+1,p+N+1).size();
		if(N1 == N2) count++;
	}
	return count;
}


int beauty_cnt(string str, int low, int high)
{
	int count=0;
	int N1, N2;
	const char *p=str.c_str();

	if(low < high)
	{
	  count = beauty_cnt(str, low+1, high);
	  /*set<char> L(p, p+low+1);
	  set<char> R(p+low+1,p+high+1);
	  N1 = L.size();
	  N2 = R.size();*/
	  N1 = set<char>(p, p+low+1).size();
	  N2 = set<char>(p+low+1,p+high+1).size();
          //cout << "string " << str << endl;
	  //for_each(L.begin(),L.end(), [](char x) {cout << x << " ";});
	  //cout << endl;
	  //for_each(R.begin(),R.end(), [](char x) {cout << x << " ";});
	  //cout << endl;
	  
	  if(N1 == N2) count++;
	}
	  

	return count;
}

int main()
{
	//string str="abacaadaba";
	string str="abacaa";
	//string str="aabacad";
	//string str="abbbbbb";
	//int count = findNoOfBeautyPair(str);
	int count = findNoOfBeautyPair1(str);
	//int count = beauty_cnt(str,0,str.size()-1);
	
	cout << "string is " << str << endl;
	cout << "count" << count << endl;
}
