#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int mindiff(int arr[],int n)
{
    int res= INT_MAX;
    sort(arr,arr+n);
    for(int i=1;i<n;i++)
    {
        res=min(res,(arr[i]-arr[i-1]));
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Minimum diff is:"<<mindiff(arr,n);
}