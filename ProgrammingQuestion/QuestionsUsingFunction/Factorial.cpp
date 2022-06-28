#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    int factorial=1;
    for(int i=2;i<=n;i++)
    {
        factorial*=i;
    }
    return factorial;
}
int main ()
{
  int n;
  cin>>n;
  int ans=fact(n);
  cout<<ans<<endl;
}