#include<iostream>
using namespace std;
int majority(int arr[],int n)
{
    int res=0,count=1;
    for(int i=1;i<n;i++)
    {
        if(arr[res]==arr[i])
        {
            count++;
        }
        else{
            count--;
        }
        if(count==0)
        {
            res=i;
            count=1;
        }
    }
    
    count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[res]==arr[i])
        {
            count++;
        }
    }
    if(count<=n/2)
      {
          res= -1;
      }
  

return arr[res];
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
    cout<<"Majority is:";
    cout<<majority(arr,n);
}