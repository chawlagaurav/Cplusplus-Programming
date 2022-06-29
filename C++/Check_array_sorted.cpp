#include<iostream>
using namespace std;
void srt(int arr[],int n)
{
    bool flag=false;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            flag=true;
        }
    }
    if(flag==false)
    {
        cout<<"Array is sorted";
    }
    else
    {
        cout<<"Array is not sorted";
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
    srt(arr,n);
}