#include<bits/stdc++.h>
using namespace std;
void hoare(int arr[],int l,int h,int p)
{
    swap(arr[p],arr[l]);
    int pivot=arr[l];
    int i=l-1;
    int j=h+1;
    while(true)
    {
        do
        {
            i++;
        }while(arr[i]<pivot)

        do
        {
            j--;
        } while (arr[j]>pivot);

        if(i>=j)
        {
            cout<<"Pivot index in new array is"<<j;
        }

        swap(arr[i],arr[j]);
        
    }


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
    hoare(arr,0,n-1,p);
}