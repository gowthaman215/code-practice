#include <bits/stdc++.h>
using namespace std;

bool balance_string(string str, size_t n)
{
	string bal_str = "(){}[]";
	if(n%2 != 0) return false;
	for(int i=0; i<=n/2; i+=2)
	{       cout << "comparing substring " << str.substr(i,2) << endl;
		size_t pos = bal_str.find(str.substr(i,2));
		if(pos != string::npos)
			continue;
		else
			return false;
	}
	return true;
}

int main()
{
	//string str="()}{[}";
	string str;
	cin>>str;
	while(str.compare("exit"))
	{
		size_t n = str.size();
		bool isbalanced = balance_string(str, n);
		if(isbalanced)
			cout << "balanced" << endl;
		else
			cout << "not balanced" << endl;
		str.clear();
		cin>>str;
	}
	return 0;
}
