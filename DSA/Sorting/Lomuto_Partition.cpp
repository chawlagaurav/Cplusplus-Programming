#include<bits/stdc++.h>
using namespace std;
void lomuto(int arr[],int l,int h,int p)
{
    swap(arr[p],arr[h]);
    int index=l-1;
    for(int i=l;i<h;i++)
    {
        if(arr[i]<arr[h])
        {
            index++;
            swap(arr[index],arr[i]);
            
        }
    }
    swap(arr[index+1],arr[h]);
    cout<<"New array is:";
    for(int k=l;k<=h;k++)
    {
        cout<<arr[k]<<" ";
    }
}
int main()
{
    int n,p;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the pivot index:";
    cin>>p;
    lomuto(arr,0,n-1,p);
}