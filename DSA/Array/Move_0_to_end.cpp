#include<bits/stdc++.h>
using namespace std;
void mze(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
    cout<<"New array is :";
    for(int j=0;j<n;j++)
    {
       cout<<arr[j]<<" "; 
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
    mze(arr,n);
}