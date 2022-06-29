#include<iostream>
using namespace std;
int bns(int arr[],int n,int x)
{
    int low=0;
    int high=n-1;
    int mid=0 ;

    while(low<high)
    {
        mid= (low+high)/2 ;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]<x)
        {
            low=(mid+1);
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n,x;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number to find ";
    cin>>x;
    cout<<"The element is present at index "<<bns(arr,n,x);
}