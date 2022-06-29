#include<iostream>
using namespace std;
int ones(int arr[],int n)
{
    int crr=0;
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            curr=0;
        }
        else{
            curr++;
            res=max(res,curr);
        }
    }
    return res;
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
    cout<<"Result is"<<ones(arr,i);
}