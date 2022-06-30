#include"bits/stdc++.h"
using namespace std;

//operator overloading
class OperatorOverloading 
{
    private :
    int real,img;
    public:
    OperatorOverloading(int real=0,int img=0)
    {
        this->real=real;
        this->img=img;
    }
    OperatorOverloading operator + (OperatorOverloading const &obj)
    {
        OperatorOverloading res;
        res.img=img+obj.img;
        res.real=real+obj.real;
        return res;
    }
    void display()
    {
        cout<<real<<" + i"<<img<<endl;
    }
};
int32_t main()
{
    OperatorOverloading c1(12,7),c2(6,7);
  OperatorOverloading c3=c1+c2;
    c3.display();
    return 0;
}