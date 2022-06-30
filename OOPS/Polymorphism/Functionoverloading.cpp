#include"bits/stdc++.h"
using namespace std;

//function overloading
class FunctionOverloading 
{
    public:
    void func()
    {
        cout<<"I am a function with no argument"<<endl;
    }
    void func(int n)
    {
        cout<<"I am function with int argument"<<endl;
    }
    void func(double n)
    {
        cout<<"I am function with double argument"<<endl;

    }

};
int32_t main()
{
    FunctionOverloading over;
    over.func();
    over.func(4);
    over.func(4.32);
}