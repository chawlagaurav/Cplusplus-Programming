//You need to maintain a minimum value so that you can count the maximum difference in each iteration

#include<bits/stdc++.h>
using namespace std;
int mxd(int arr[],int n)
{
    int res=arr[1]-arr[0];
    int minval=arr[0];
    for(int i=1;i<n;i++)
    {
        res=max(res,arr[i]-minval);
        minval=min(minval,arr[i]);
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
    cout<<"Maximum difference is:"<<mxd(arr,n);
}