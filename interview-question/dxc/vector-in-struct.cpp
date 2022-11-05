#include <bits/stdc++.h>
using namespace std;

struct student
{
	string id;
	string name;
	string class_section;
	vector<string> subjects;
	

};

int main()
{
	student s1 = {"101","Gowtham","XI-F", {"tamil","english","maths"}};
	student s2 = {"102","Karthik","XII-F", {"tamil","english","maths"}};
	student s3 = {"103","Gomathi","X-F", {"tamil","english","maths"}};
	student s4 = {"104","Kowsalya","IX-F", {"tamil","english","maths"}};
	student s5 = {"105","Dhiya","LKG-A", {"tamil","english","maths"}};
	/*
	student s1 = {"101","Gowtham","XI-F"};
	student s2 = {"102","Karthik","XII-F"};
	student s3 = {"103","Gomathi","X-F"};
	student s4 = {"104","Kowsalya","IX-F"};
	student s5 = {"105","Dhiya","LKG-A"};*/

	list<student*> s_list;
	set<student*> s_set;
        
	cout << "using list container" << endl;

	s_list.push_back(&s1);
	s_list.push_back(&s2);
	s_list.push_back(&s3);
	s_list.push_back(&s4);
	s_list.push_back(&s5);
        
	//print list
	for(auto& e : s_list)
	{
		cout << "{" << e->id << "," << e->name << "," << e->class_section << "," << "{";
		for(auto&s : e->subjects)
			cout << s << " ";
		cout << "}" << endl;
	}

        cout << "using set containers" << endl;

	s_set.insert(&s1);
	s_set.insert(&s2);
	s_set.insert(&s3);
	s_set.insert(&s4);
	s_set.insert(&s5);

	for(auto& e : s_set)
	{
		cout << "{" << e->id << "," << e->name << "," << e->class_section << "," << "{";
		for(auto&s : e->subjects)
			cout << s << " ";
		cout << "}" << endl;
	}

	return 0;
}
