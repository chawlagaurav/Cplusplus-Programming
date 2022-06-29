#include<bits/stdc++.h>
using namespace std;
int oddoc(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        res=res^arr[i]; //this is because of xor operator, because when a number is done xor by itself , it gives 0,nd if number is done by 0, it gives number itself
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Odd occuring element is"<<oddoc(arr,n);
}