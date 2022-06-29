#include<iostream>
using namespace std;
void reverset(int arr[],int low,int high)
{
    int temp=0;
    while(low<high)
    {
        temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}
void lrx(int arr[],int n,int x)
{
    reverset(arr,0,x-1);
    reverset(arr,x,n-1);
    reverset(arr,0,n-1);
    cout<<"Array elements after rotation:";
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
}

int main()
{
    int n,x;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"ENter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number by which you want to rotate your array:";
    cin>>x;
    lrx(arr,n,x);
}