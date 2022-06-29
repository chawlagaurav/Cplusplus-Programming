#include<iostream>
using namespace std;
int peakele(int arr[],int n)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        int mid=(low+high)/2;
        if((mid==0 || arr[mid]>=arr[mid-1])&&(mid==(n-1) || arr[mid]>=arr[mid+1]))
        {
            return mid;
        }
        else if(mid>0 &&(arr[mid-1]>arr[mid]))
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return mid;
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
    cout<<"Peal element is at index "<<peakele(arr,n);
}