#include<bits/stdc++.h>
using namespace std;
void boundary(int *arr[],int r,int c)
{
    if(c==1)
    {
        for(int i=0;i<r;i++)
        {
            cout<<arr[i][0]<<" ";
        }
    }
    else if(r==1)
    {
        for(int i=0;i<c;i++)
        {
            cout<<arr[0][i]<<" ";
        }
    }
    else
    {
        for(int i=0;i<c;i++)
        {
            cout<<arr[0][i]<<" ";
        }

        for(int j=1;j<r;j++)
        {
            cout<<arr[j][c-1]<<" ";
        }

        for(int k=c-2;k>=0;k--)
        {
            cout<<arr[r-1][k]<<" ";
        }

        for(int l=r-2;l>0;l--)
        {
            cout<<arr[l][0]<<" ";
        }
    }
}
int main()
{
    int r,c;
    cout<<"Enter the number of rows:";
    cin>>r;
    cout<<"Enter the number of columns:";
    cin>>c; 
    int *arr[r];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<r;i++)
    {
        arr[i]= new int[c];
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    boundary(arr,r,c);
}