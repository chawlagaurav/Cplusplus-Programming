#include<iostream>
using namespace std;
void dele(int arr[],int n, int x)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<"Element is not present broo:";
    }
    else
    {
        for(int j=i;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        cout<<"Elements are:";
        for(int k=0;k<n-1;k++)
        {
            cout<<arr[k]<<" ";
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
    cout<<"Enter the element to be deleted:";
    cin>>x;
    dele(arr,n,x);
}