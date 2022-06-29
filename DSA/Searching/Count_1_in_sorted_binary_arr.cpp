#include<iostream>
using namespace std;
int oneb(int arr[],int n)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==0)
        {
            low=mid+1;
        }
        else 
        {
            if(mid==0 || arr[mid-1]==0)
               return (n-mid);
            else
               high=mid-1;
        }
        
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Number of 1 is :"<<oneb(arr,n);
}