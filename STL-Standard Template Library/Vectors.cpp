#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v)

{
    cout<< "size: "<< v.size() <<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";

    }v.push_back(2);
    cout<<endl;
}
int main()
{
    // vector<int> v(10,3);//specified value
    vector<int> v;
    v.push_back(7);
     v.push_back(6);
    // printVec(v); 

    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     printVec(v);
    //     v.push_back(x);
    // }
    // printVec(v);
    //COPY VECTOR
    vector<int> v2=v; //O(n)
    v2.push_back(5);
    printVec(v);
     printVec(v);
     printVec(v2);
}