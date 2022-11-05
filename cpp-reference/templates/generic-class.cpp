#include <iostream>
using namespace std;
  
template <typename T>
class Array {
private:
    T* ptr;
    int size;
  
public:
    Array(T arr[], int s);
    void print();
    ~Array();
};
  
template <typename T>
Array<T>::Array(T arr[], int s)
{
    cout << "object created" << endl;
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
        ptr[i] = arr[i];
}
  
template <typename T>
void Array<T>::print()
{
    for (int i = 0; i < size; i++)
        cout << " " << *(ptr + i);
    cout << endl;
}

template <typename T>
Array<T>::~Array()
{
        cout << "object destroyed" << endl;
	delete[] ptr;
	ptr = NULL;
}
  
int main()
{
    int iarr[5] = { 1, 2, 3, 4, 5 };
    char carr[5] = {'A', 'B', 'C', 'D', 'E'};

    Array<int> a(iarr, 5);
    a.print();

    Array<char> b(carr,5);
    b.print();

    return 0;
}
