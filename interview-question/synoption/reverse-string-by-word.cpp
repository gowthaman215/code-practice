#include <bits/stdc++.h>
using namespace std;
string reverse(string str)
{
	string rstr = "";
	int n = str.size();
	size_t p = 0;
	while(p != string::npos)
	{
		p = str.rfind(".");
		rstr += str.substr(p+1, n-p) + ".";
		str = str.substr(0, p);
		
	}
	
	rstr.erase(rstr.end()-1);

	return rstr;
}

int main()
{
string str = "i.like.this.program.very.much";
string rstr = reverse(str);
cout << rstr << endl;
return 0;
}
