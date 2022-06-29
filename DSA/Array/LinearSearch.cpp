#include<iostream>
using namespace std;
int main()
{
    int n,x;
    int count=0;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched:";
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<"Element found";
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<"Element is not present in the array:";
    }
}