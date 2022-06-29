#include<bits/stdc++.h>
using namespace std;
int mindiff(int arr[],int n,int m)
{
    if(m>n)
    {
        return -1;
    }
    sort(arr,arr+n);
    int res = arr[m-1]-arr[0];
    for(int i=1; (i+m-1)<n ; i++)
    {
        res= min(res,(arr[i+m-1] - arr[i]));
    }
    return res;
}
int main()
{
    int n,m;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the packets to be distributed:";
    cin>>m;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<mindiff(arr,n,m);
}