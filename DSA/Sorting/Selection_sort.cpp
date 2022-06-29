//in this, we need to find the minimum element and then place it at first place, then again find minimum in remaining elements a
// and again replace by second place

#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min_index]>arr[j])
            {
                min_index=j;
                
            }
            swap(arr[min_index],arr[i]);
        }
    }

    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
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
    selection_sort(arr,n);
}