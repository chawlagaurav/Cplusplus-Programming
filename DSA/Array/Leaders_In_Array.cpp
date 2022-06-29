#include<iostream>
using namespace std;
void ldr(int arr[],int n)
{
    cout<<"LEADERS are:";
    int y=arr[n-1];
    cout<<y<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(y<arr[i])
        {
            y=arr[i];
            cout<<y<<" ";
        }
    }

}
int main()
{
    int n;
    cout<<"Enter the elements of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ldr(arr,n);
}