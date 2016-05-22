#include <iostream>

using namespace std;

class B
{
    public:

    string *login;
    string *msisdn;
    string *password;
    
    B()
    {
        login = new string;
        msisdn = new string;
        password = new string;
    }
    ~B()
    {
        delete login;
        delete msisdn;
        delete password;
    }


};
class A
{
    public:

    B *b;
    
    A()
    {
        b = new B();
    }

    ~A()
    {
        delete b;
    }

    void set()
    {
        *(b->login) = "gowthaman";
        *(b->msisdn) = "9566550398";
        *(b->password) = "12345";

    }
    void put()
    {
        cout << *(b->login) << endl;
        cout << *(b->msisdn) << endl;
        cout << *(b->password) << endl;
    }
};

int main()
{
    A a;
    a.set();
    a.put();
    return 0;
}
