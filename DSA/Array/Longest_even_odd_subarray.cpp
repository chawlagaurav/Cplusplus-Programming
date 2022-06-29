#include<iostream>
using namespace std;
int maxlensub(int arr[],int n)
{
    int curr=0;
    int res=0;
    for(int i=1;i<n;i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0)||(arr[i-1]%2==0 && arr[i]%2!=0))
        {
            curr++;
            res=max(res,curr);
        }
        else
        {
            curr=1;
        }

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
    maxlensub(arr,n);

}