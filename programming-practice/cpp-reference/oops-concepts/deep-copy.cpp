#include <iostream>
using namespace std;

class Deepcopy {
	private:
		int N1, N2;
		int *P;

	public:
		Deepcopy() {
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

		//copy constructor -> it is responsible for deep copy.
		Deepcopy(Deepcopy &D) {
			P = new int;
			N1 = D.N1;
			N2 = D.N2;
			*P = *(D.P);
		}

		//destructor -> to deallocate memory consumed by new pointer p. 
		~Deepcopy() {
			delete P;
		}
};

int main() {
	Deepcopy *D1 = new Deepcopy();
	D1->setData(3, 5, 11);
	D1->showData();

	//Copy constructor declared above will came in action and do deep copy.
	Deepcopy * D2 = new Deepcopy(*D1);  
	D2->showData();

	delete D1;
	
	D2->showData();
}
