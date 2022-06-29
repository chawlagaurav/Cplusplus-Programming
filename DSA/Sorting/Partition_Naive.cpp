#include<iostream>
using namespace std;
void partition(int arr[],int l,int h,int p)
{
    int temp[h-l+1],index=0;
    for(int i=l;i<=h;i++)
    {
        if(arr[i]<arr[p])
        {
            temp[index]=arr[i];
            index++;
        }
    }
    for(int j=l;j<=h;j++)
    {
        if(arr[j]==arr[p])
        {
            temp[index]=arr[j];
            index++;
        }
    }
    int res=l+index-1;
    for(int k=l;k<=h;k++)
    {
        if(arr[k]>arr[p])
        {
            temp[index]=arr[k];
            index++;
        }
    }

    for(int m=l;m<=h;m++)
    {
        arr[m]=temp[m-l];
    }

    cout<<"Index of pivot is :"<res;
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
    cout<<"Enter the pivot :";
    cin>>p;
    partition(arr,0,n-1,p);
}