#include<iostream>
using namespace std;
void unionsrt(int arr[],int jrr[],int m,int n)
{
    int i=0;
    int j=0;
    while(i<m && j<n)
    {
        if(i>0 && (arr[i]==arr[i-1]))
        {
            i++;
            continue;
        }


        if(j>0 && (jrr[j]==jrr[j-1]))
        {
            j++;
            continue;
        }


        if(arr[i]<jrr[j])
        {
            cout<<arr[i]<<" ";
            i++;
        }
        else if(arr[i]>jrr[j])
        {
            cout<<jrr[j]<<" ";
            j++;
        }
        else if(arr[i]==arr[j])
        {
            cout<<arr[i]<<" ";
            i++;
            j++;
        }
    }

    while(i<m)
    {
        if(i==0||arr[i]!=arr[i-1])
        {
          cout<<arr[i]<<" ";
          i++;
        }
    }
        
    while(j<n)
    {
        if(j==0||jrr[j]!=jrr[j-1])
        {
            cout<<jrr[j]<<" ";
            j++;
        }
    }
   
}
int main()
{
    int m,n;
    cout<<"Enter the size of the arrays:";
    cin>>m>>n;
    int arr[m];
    int jrr[n];
    cout<<"Enter the elements of the first array:";
    for(int i=0;i<m;i++)
    {
        cin>>m;
    }
    cout<<"Enter the elements of the second array:";
    for(int j=0;j<n;j++)
    {
        cin>>n;
    }
    unionsrt(arr,jrr,m,n);

}