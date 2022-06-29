#include<iostream>
using namespace std;
void intersection(int arr[],int jrr[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        
        if(arr[i]==arr[i-1])
        {
            i++;
            continue;
        }
        
        
        if(arr[i]<jrr[j])
        {
            i++;
        }
        else if(arr[i]>jrr[j])
        {
            j++;
        }
        else
        {
            cout<<arr[i]<<" ";
            i++;
            j++;
        }
    }
}
int main()
{
    int m,n;
    cout<<"Enter the size of first array:";
    cin>>m;
    cout<<"Enter the size of second array:";
    cin>>n;
    int arr[m];
    int jrr[n];
    cout<<"Enter the elements of the first array:";
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the elements of the second array:";
    for(int j=0;j<n;j++)
    {
        cin>>jrr[j];
    }

    intersection(arr,jrr,m,n);

}