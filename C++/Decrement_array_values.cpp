#include<iostream>
using namespace std;
void deca(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]-1;
    }
    cout<<"Modified array is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
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
    deca(arr,n);
}