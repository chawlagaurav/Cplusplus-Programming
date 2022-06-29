#include<bits/stdc++.h>
using namespace std;
int subsum(int arr[],int n,int sum)
{
    if(n==0)
    {
        return (sum==0)?1:0;
    }
    return subsum(arr,n-1,sum)+subsum(arr,n-1,sum-arr[n-1]);

}
int main()
{
    int n,sum;
    cout<<"Enter size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the sum to check:";
    cin>>sum;
    cout<<subsum(arr,n,sum);
}