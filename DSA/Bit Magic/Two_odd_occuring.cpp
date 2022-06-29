#include<iostream>
using namespace std;
void twod(int arr[],int n)
{
    int xore=0;
    int res1=0;
    int res2=0;
    for(int i=0;i<n;i++)
    {
        xore=xore^arr[i];
    }
    int sb= xore&(~(xore-1)) ;
    for(int i=0;i<n;i++)
    {
        if((sb&arr[i])!=0)
        {
            res1=arr[i]^res1;
        }
        else
        {
            res2=arr[i]^res2;
        }
    }
    cout<<res1<<res2;
}
int main()
{
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    twod(arr,n);
}