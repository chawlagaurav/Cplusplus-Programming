#include<iostream>
using namespace std;
void merge_array(int arr[],int jrr[],int m,int n)
{
    int i=0;
    int j=0;
    while(i<m && j<n)
    {
        if(arr[i]<=jrr[j])
        {
            cout<<arr[i]<<" ";
            i++;
        }
        else{
            cout<<jrr[j]<<" ";
            j++;
        }
    }
    while(i<m)
    {
        cout<<arr[i]<<" ";
    }
    while(j<n)
    {
        cout<<jrr[j]<<" ";
    }
}
int main()
{
    int n,m;
    cout<<"Enter the size of first array";
    cin>>m;
    cout<<"Enter the size of sec array";
    cin>>n;
    int arr[m];
    int jrr[n];
    cout<<"Enter the elements of the array";
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++)
    {
        cin>>jrr[i];
    }
    merge_array(arr,jrr,m,n);
}