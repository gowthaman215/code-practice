#include <iostream>
using namespace std;

class Shallowcopy {
	private:
		int N1, N2;
		int *P;

	public:
		Shallowcopy() {
			P = new int;
		}

		void setData(int x, int y, int z) {
			N1 = x;
			N2 = y;
			*P = z;
		}

		void showData() {
			cout << "A = " << N1 << " B = " << N2 << " *P = " << *P << endl;
		}

                //No user defined copy constructor is defined here.

		//destructor -> to deallocate memory consumed by new pointer p. 
		~Shallowcopy() {
			delete P;
		}
};

int main() {
	Shallowcopy *D1 = new Shallowcopy();
	D1->setData(3, 5, 11);
	D1->showData();

	//compiler generated default copy constructor will do shallow copy.
	Shallowcopy * D2 = new Shallowcopy(*D1);  
	D2->showData();

	delete D1;
	
	D2->showData(); //unknown P value
}
