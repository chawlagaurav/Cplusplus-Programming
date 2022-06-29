#include<iostream>
using namespace std;
int bsearch(int arr[],int low,int high,int x)
{
    if(low>high)
    {
        return -1;
    }
    int mid=(low+high)/2 ;

    if(arr[mid] == x)
		return mid;

	else if(arr[mid] > x)
		return bsearch(arr, low, mid - 1, x);

	else
		return bsearch(arr, mid + 1, high, x);
}
int main()
{
    int n,x;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number to search:";
    cin>>x;
    cout<<"The element is present at index :"<<bsearch(arr,0,n-1,x);
}