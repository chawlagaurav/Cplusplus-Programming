#include<iostream>
using namespace std;
void odev(int arr[],int n)
{
    int count=0;
    int bount=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            count++;
        }
        else
        {
            bount++;
        }
    }
    cout<<"Number of even elements is:"<<count<<endl;
    cout<<"Number of odd elements is:"<<bount;
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
    odev(arr,n);
}