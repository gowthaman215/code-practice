#include <iostream>
#include <string>
using namespace std;

int main()
{
	string mystring="this is my love";
	string search="my";
	string replace="our";

	int p1,p2;
	p1=mystring.find(search);
	p2=search.length();
	mystring.replace(p1,p2,replace);
	cout << mystring << endl;
}
