#include<iostream>
using namespace std;
void wve(int arr[],int n)
{
    int low=0,high=1;
    int temp;
    while(high<n)
    {
        if(arr[low]<arr[high])
        {
            cout<<arr[low]<<" "<<arr[high]<<" ";
        }
        else
        {
            temp=arr[low];
            arr[low]=arr[high];
            arr[high]=temp;
            cout<<arr[low]<<" "<<arr[high]<<" ";
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
    wve(arr,n);
}