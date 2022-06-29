#include<bits/stdc++.h>
using namespace std;
int firstocc(int arr[],int n,int x)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(arr[mid]<x)
        {
            low=mid+1;
        }
        else if(arr[mid]>x)
        {
            high=mid-1;
        }
        else
        {
            if(mid==0 || arr[mid]!=arr[mid-1])
            {
                return mid;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    
}
int lastocc(int arr[],int n,int x)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(arr[mid]<x)
        {
            low=mid+1;
        }
        else if(arr[mid]>x)
        {
            high=mid-1;
        }
        else
        {
            if(mid== n-1 || arr[mid]!=arr[mid+1])
            {
                return mid;
            }
            else
            {
                low=mid+1;
            }
        }
    }
    return -1;
}
int totoc(int arr[],int n,int x)
{
    int first = firstocc(arr, n, x);

	if(first == -1)
		return 0;
	else 
		return lastocc(arr, n, x) - first + 1;

}
int main()
{
    int n,x;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to check its occurence:";
    cin>>x;
    cout<<"Occurence of x is"<<totoc(arr,n,x);
}
