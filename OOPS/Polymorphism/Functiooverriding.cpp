#include"bits/stdc++.h"
using namespace std;

//function overriding
class base
{
    public:
    virtual void print()
    {
        cout<<"This is the base class's print function";

    }
    void display()
    {
        cout<<"This is the base class's print function";

    }

};
class derived :public base{
    public:
    void print()
    {
        cout<<"This is the derived class's print function";
    }
    void display()
    {
        cout<<"This is the base class's display function";
    }
};
int32_t main()
{
    base *baseptr;
    derived d;
    baseptr=&d;
    baseptr ->print();
    baseptr ->display();
}