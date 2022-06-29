#include<iostream>
using namespace std;
void larg(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[res])
        {
            res=i;
        }
    }
    cout<<"Largest Elements is:"<<arr[res];
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
    larg(arr,n);
}