#include<iostream>
using namespace std;
//single Inheritance
class A{
    public:
    void func()
    {
        cout<<"Inherited";
    }
};
class B : public A{
};
int main()
{
    B b;
    b.func();
    return 0;
}