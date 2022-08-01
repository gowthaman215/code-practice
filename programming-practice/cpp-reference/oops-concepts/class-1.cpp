#include <iostream>
using namespace std;
class XYZ
{
	private:
		int xyz;
	
	public:
		XYZ() 
		{
			cout << "object created" << endl;
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

			cout << "object destroyed" << endl;
		}

};

int main()
{

	XYZ o;
	o.putXYZ(10);
	cout << o.getXYZ() << endl;
	return 0;
}
