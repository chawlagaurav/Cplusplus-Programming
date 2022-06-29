#include<iostream>
using namespace std;
void ones(int arr[],int n)
{
    int count=0;
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
           count=0;
        }
        else
        {
            count++;
        }
        res=max(count,res);
    }
    cout<<"Maximu consecutive ones is:"<<res;
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
    ones(arr,n);
}