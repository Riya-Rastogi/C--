#include<iostream>
using namespace std;

//function of linear search

int linearsearch(int arr[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;//size of array;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<linearsearch(arr,n,target);
}

//timecomplexity=o(n)