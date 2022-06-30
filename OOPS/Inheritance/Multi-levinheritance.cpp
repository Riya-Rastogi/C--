#include<iostream>
using namespace std;
//Multi-Level-Inheritance

class A
{
    public:
    void Afunc()
    {
        cout<<"func A\n";
    }
};
class B:public A{
    public:
    void Bfunc()
    {
        cout<<"func B\n";
    }
};
class C:public B{
    public:
    void Cfunc()
    {
        cout<<"func C\n";
    }
};
int main()
{
    C c;
    c.Afunc();
    c.Bfunc();
    c.Cfunc();
}