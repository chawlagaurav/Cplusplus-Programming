#include<iostream>
using namespace std;
int srch(int arr[],int n,int x)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[low]<arr[mid])   //if left half is sorted
        {
            if((x>=arr[low])&&(x<arr[mid]))
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        else                       //if right half is sorted
        {
            if((x>arr[mid])&&(x<=arr[high]))
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }

    }
}
int main()
{
    int n,x;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to search:";
    cin>>x;
    srch(arr,n,x);
}