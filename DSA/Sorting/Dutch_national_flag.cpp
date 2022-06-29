#include<bits/stdc++.h>
using namespace std;
void dutchd(int arr[],int n)
{
    
    int lo=0;
    int mid=0;
    int hi= n-1;
    while(mid<=hi)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[lo]);
            mid++;
            lo++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[hi]);
            hi--;
           
        }
    }

}
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    dutchd(arr,n);
}