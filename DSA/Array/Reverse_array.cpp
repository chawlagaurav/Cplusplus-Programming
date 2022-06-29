#include<iostream>
using namespace std;
void reve(int arr[],int n)
{
    int low=0;
    int high=n-1;
    int temp;
    while(low<high)
    {
        temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
        temp=0;
    }
    cout<<"Reversed array is:";
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
    reve(arr,n);
}