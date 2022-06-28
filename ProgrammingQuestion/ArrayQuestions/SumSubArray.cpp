#include<iostream>
using namespace std;
int main()
{
    int mx=-19999999;
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int current=0;
    for (int i=0;i<n;i++)
    {
        current=0;
        for(int j=i;j<n;j++)
        {
            current+=a[j];
            cout<<current<<endl;

        }
    }
}