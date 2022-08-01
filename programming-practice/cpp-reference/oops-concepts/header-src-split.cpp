
#include <iostream>
#include <header-src-split.h>
using namespace std;

XYZ::XYZ() 
{
	cout << this << " : object created by default construnctor" << endl;
	xyz = 0;
}

XYZ::XYZ(int abc)
{
	cout << this << " : object created by parameterized construnctor" << endl;
	xyz=abc;
}


XYZ::XYZ(XYZ &ref_obj)
{
	cout << this << " : object created by copy construnctor" << endl;
	xyz=ref_obj.xyz;
}

int XYZ::getXYZ()
{
	cout << "getXYZ : object member function called" << endl;
	return xyz;
}

void XYZ::putXYZ(int abc)
{
	cout << "putXYZ : object member function called" << endl;
	xyz=abc;
}

XYZ::~XYZ()
{

	cout << this << " : object destroyed" << endl;
}
int main()
{

	XYZ o;
	cout << o.getXYZ() << endl;

	XYZ o1(10);
	cout << o1.getXYZ() << endl;

	XYZ o2(o1);
	cout << o2.getXYZ() << endl;

	return 0;
}
