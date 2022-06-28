#include<iostream>
using namespace std;

int Binarysearch(int arr[],int n,int target)
{
    int si=0;
    int ei=n;
    while(n>0)
    {
        int mid=(si+ei)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]>target)
        {
            ei=mid-1;

        }
        else{
            si=mid+1;
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
    cout<<Binarysearch(arr,n,target);
}
// time complexity=o(logn)