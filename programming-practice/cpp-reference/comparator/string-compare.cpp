#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

/*'fun' function only sorts if string size is equal and keeps the larger integers at last*/
bool fun(string i,string j)
{
    int n = i.length();
    int m = j.length();
    if(n == m)
        return (i < j);
    return n < m;
}

bool fun1(string i,string j)
{
        return (i < j);
}
//Driver Program
int main()
{
    vector <string> arr = {"gowthaman", "aafi", "priyanka", "sufiya", "karthika"};
    sort(arr.begin(), arr.end(), fun1);
    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << endl;
}

