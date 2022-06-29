#include<iostream>
using namespace std;
void insertin(int arr[],int n, int cap, int a , int b)
{
    if(n==cap)
    {
        cout<<"Not enough space for a new element's entrance";
    }
    else
    {
        int ind=b-1;
        for(int i=n-1;i>=ind;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[ind]=a;

        cout<<"New array is:";
        for(int i=0;i<n+1;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}
int main()
{
    int n,cap;
    int a,b;
    cout<<"Enter the number of elements in current array:";
    cin>>n;
    cout<<"Enter the capacity of the array:";
    cin>>cap;
    int arr[cap];
    cout<<"Enter the element and its position where it needs to be enterd:";
    cin>>a>>b;
    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertin(arr,n,cap,a,b);

}