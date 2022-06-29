#include<iostream>
using namespace std;
void strn(int arr[],int n)
{
    int low=0,high=1;
    while(high<n)
    {
        if(arr[low]<arr[high])
        {
            cout<<arr[high]<<" ";
        }
        else
        {
            cout<<arr[low]<<" ";
        }
        low++;
        high++;
    }
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
    strn(arr,n);
}