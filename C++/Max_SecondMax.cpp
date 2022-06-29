#include<iostream>
using namespace std;
void msm(int arr[],int n)
{
    int max=arr[0];
    int smax=arr[0];
    for(int i=1;i<n;i++)
    {  
        if(arr[i]>max)
        {
            smax=max;
            max=arr[i]; 
        }
    }
    cout<<"Max element is"<<max<<endl;
    cout<<"Second max element is"<<smax<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    msm(arr,n);
}