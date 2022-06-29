#include<iostream>
using namespace std;
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
    cout<<"Enter a number to eliminate";
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            continue;
        }
        else
        {
            cout<<"Approved"<<" ";
        }
    }
}