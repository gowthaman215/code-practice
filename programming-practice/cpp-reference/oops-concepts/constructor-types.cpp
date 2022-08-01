#include <iostream>
using namespace std;
class XYZ
{
	private:
		int xyz;
	
	public:
		XYZ() 
		{
			cout << this << " : object created by default construnctor" << endl;
			xyz = 0;
		}

	       	XYZ(int abc)
		{
			cout << this << " : object created by parameterized construnctor" << endl;
			xyz=abc;
		}
	
			
	       	XYZ(XYZ &ref_obj)
		{
			cout << this << " : object created by copy construnctor" << endl;
			xyz=ref_obj.xyz;
		}
		
		int getXYZ()
		{
			cout << "getXYZ : object member function called" << endl;
                	return xyz;
		}

		void putXYZ(int abc)
		{
			cout << "putXYZ : object member function called" << endl;
			xyz=abc;
		}

		~XYZ()
		{

			cout << this << " : object destroyed" << endl;
		}

};

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
