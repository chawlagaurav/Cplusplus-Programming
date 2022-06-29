#include<bits/stdc++.h>
using namespace std;
void snake(int *arr[],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<c;j++)
             {
               cout<<arr[i][j];
             }

        }
        else
        {
            for(int j=c-1;j>=0;j--)
           {
            cout<<arr[i][j];
           }
        }
        
    }
}
int main()
{

    int r,c;
    cout<<"Enter the number of rows";
    cin>>r;
    cout<<"Enter the number of cols";
    cin>>c;
    int *arr[r];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<r;i++)
    {
        arr[i] = new int[c];
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    snake(arr,r,c);
}