#include<iostream>
using namespace std;
void somec(int arr[],int n)
{
    for(int i=0;i<n-2;i++)
    {
        int temp=0;
        temp=arr[i];
        arr[i]=arr[i+2];
        arr[i+2]=temp;
    }
    cout<<"New array is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    somec(arr,n);

}