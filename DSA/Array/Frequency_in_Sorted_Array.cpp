//keep the count of frequency for the element and then print it.

#include<iostream>
using namespace std;
void fre(int arr[],int n)
{
    int freq=1;
    int i=1;
    while(i<n)
    {
        while(i<n && arr[i]==arr[i-1])
        {
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        i++;
        freq=1;
    }
    if(n==1 || arr[n-1]!=arr[n-2])
    {
        cout<<arr[n-1]<<" "<<"1";
    }
}
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
    fre(arr,n);
}

