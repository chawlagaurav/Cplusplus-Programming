#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the r and c:";
    cin>>n;
    int *arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        arr[i]= new int[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }

    

        for(int i=0;i<n;i++)
        {
            int low=0;
            int high=n-1;
            while(low<high)
            {
                swap(arr[low][i],arr[high][i]);
                low++;
                high--;
            }
            
        }
    
}