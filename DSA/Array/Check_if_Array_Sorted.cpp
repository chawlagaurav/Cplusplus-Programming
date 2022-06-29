#include<iostream>
using namespace std;
void chck(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]<arr[i])
        {
            count++;
            break;
        }
        
    }
    if(count>0)
    {
        cout<<"Array is not sorted";
    }
    else
    {
        cout<<"Array is sorted bro!!";
    }
}
/*
bool chck(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]>arr[i])
        {
            return false;
            break;
        }

    }
    return true;
}
*/
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    chck(arr,n);
}