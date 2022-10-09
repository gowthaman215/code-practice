#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v = {1,2,3,4,5};
	vector<int>::iterator it;


	//inserting values in vector
	//v.push_back(1);
	//v.push_back(2);
	//v.push_back(3);
	//v.push_back(4);
	//v.push_back(5);

	//traversal
	cout << "Traversal functions" << endl;
	cout << *v.begin() << endl;
	cout << *(v.end()-1) << endl;

	cout << *v.rbegin() << endl;
	cout << *v.rend() << endl;
	
	cout << *v.cbegin() << endl;
	cout << *(v.cend()-1) << endl;
	
	cout << *v.crbegin() << endl;
	cout << *v.crend() << endl;
	
	for(auto it=v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

        //capasity functions
	cout << "capacity functions" << endl;
	cout << v.size() << endl;
	cout << v.max_size() << endl;
	cout << v.capacity() << endl;
	v.resize(10,100);
        v.push_back(6);

	for(auto it=v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

	if (!v.empty()) cout << "not empty" << endl;
        
	//v.clear(); //modifier

	//if (v.empty()) cout << "empty" << endl;
	
	//cout << shrink_to_fit() << endl;
	//cout << reserve() << endl;

	//element access
	//cout << "element functions" << endl;
	cout << v[0] << endl;
	cout << v.at(1) << endl;
	cout << v.front() << endl;
	cout << v.back() << endl;
	cout << v.data() << endl;
	int *ptr = v.data();
	cout << *(ptr + 1) << endl;

	//modifier functions
	cout << "modifier functions" << endl;

	v.assign(2,200);
	//push_back();
	//pop_back();
	v.insert(v.begin()+1,100);
	v.erase(v.begin()+2);
	
	vector<int> v1 = {1,2,3};

	v.swap(v1);
	v.emplace(v.begin()+1, 100);
	v.emplace_back(200);

	//clear();
	//removing

        /*	
	for(int i=0; i< v.size(); i++)
	{
		//cout << v[i] << endl;
		v.pop_back();
	}
	*/

        //v.pop_back();
        //v.pop_back();
        //v.pop_back();
        //v.pop_back();
        //v.pop_back();

	for(auto it=v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

	return 0;
}
