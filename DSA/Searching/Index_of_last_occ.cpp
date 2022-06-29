#include<iostream>
using namespace std;
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
            high=n-1;
        }
        else
        {
            if(mid==0 || arr[mid]!=arr[mid+1])
            {
                return mid;
            }
            else
            {
                low=mid+1;
            }
        }
    }
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
    cout<<"Enter the elements to find:";
    cin>>x;
    cout<<"First occurence of x is at index "<<lastocc(arr,n,x);
    cout<<"*Note: -1 denotes element is not present*";

}