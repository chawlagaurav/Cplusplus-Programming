#include<bits/stdc++.h>
using namespace std;
void srchrc(int *arr[],int r,int c,int a)
{
    int i=0;
    int j=c-1;
    while(i<r && j>=0)
    {
        if(arr[i][j]==a)
        {
            cout<<"Found at ("<<i<<","<<j<<")";
            return;
        }
        else if(arr[i][j]>a)
        {
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"Not found";
}
int main()
{
    int r,c,a; 
    cout<<"Enter the number of rows:";
    cin>>r;
    cout<<"Enter the number of cols:";
    cin>>c; 
    int *arr[r];
    cout<<"Enter the elements of this matrix:";
    for(int i=0;i<r;i++)
    {
        arr[i] = new int[c];
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        } 
    }
    cout<<"Enter the element to search:";
    cin>>a;
    
    srchrc(arr,r,c,a);
}