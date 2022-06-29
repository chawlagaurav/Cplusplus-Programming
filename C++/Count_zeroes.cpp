#include<iostream>
using namespace std;
int cntz(int arr[],int n)
{
    int count=0;
    for(int i=n-1;i>=0;i--)
    {
        count++;
        
        if(arr[i]==1)
        {
            break;
        }
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array in such manner that all ones are at first place:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Number of 0s is : "<<cntz(arr,n);
}