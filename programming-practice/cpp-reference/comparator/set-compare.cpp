#include<iostream>
#include<algorithm>
#include<set>

using namespace std;
struct MyStruct {
   string roll;
   string name;
   MyStruct(string roll, string name) {
      this -> roll = roll;
      this -> name = name;
   }
};

struct asc
{

   bool operator()(const MyStruct& lhs, const MyStruct& rhs) 
   {
	   if (lhs.roll==rhs.roll)
		   return lhs.name<rhs.name;
	   else
		   return lhs.roll<rhs.roll;
   }
};

int main() {
   std::set<MyStruct, asc> s;
   s.insert(MyStruct("XXXXX", "Gowthaman"));
   s.insert(MyStruct("XXXXX", "Priyanka"));
   s.insert(MyStruct("XXXXX", "Karthika"));
   s.insert(MyStruct("XXXXX", "Afi"));
   
   s.insert(MyStruct("YYYYY", "Gowthaman"));
   s.insert(MyStruct("YYYYY", "Priyanka"));
   s.insert(MyStruct("YYYYY", "Karthika"));
   s.insert(MyStruct("YYYYY", "Afi"));
   
   s.insert(MyStruct("ZZZZZ", "Gowthaman"));
   s.insert(MyStruct("ZZZZZ", "Priyanka"));
   s.insert(MyStruct("ZZZZZ", "Karthika"));
   s.insert(MyStruct("ZZZZZ", "Afi"));
   
   // Using lambda expressions in C++11
   /*sort(s.begin(), s.end(), [](const MyStruct& lhs, const MyStruct& rhs) {
		   if (lhs.roll==rhs.roll)
			return lhs.name<rhs.name;
   		   else
		   	return lhs.roll<rhs.roll;
		});
  */


   for(auto it = s.begin(); it != s.end(); it++) {
      cout << it->roll << "\t" << it -> name << endl;
   }

   return 0;
}
