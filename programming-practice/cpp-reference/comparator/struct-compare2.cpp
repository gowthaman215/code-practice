#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
struct MyStruct {
   string roll;
   string name;
   MyStruct(string roll, string name) {
      this -> roll = roll;
      this -> name = name;
   }
};
int main() {
   std::vector<MyStruct> vec;
   vec.push_back(MyStruct("e5585437", "Gowthaman"));
   vec.push_back(MyStruct("e5590323", "Priyanka"));
   vec.push_back(MyStruct("e1034983", "Karthika"));
   vec.push_back(MyStruct("e1239319", "Afi"));
   
   // Using lambda expressions in C++11
   sort(vec.begin(), vec.end(), [](const MyStruct& lhs, const MyStruct& rhs) {return lhs.roll<rhs.roll;});
   //sort(vec.begin(), vec.end(), [](const MyStruct& lhs, const MyStruct& rhs) {return lhs.name<rhs.name;});

   for(auto it = vec.begin(); it != vec.end(); it++) {
      cout << it->roll << "\t" << it -> name << endl;
   }

   return 0;
}
