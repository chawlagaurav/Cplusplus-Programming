#include<iostream>
using namespace std;
void secol(int arr[],int n)
{
    int res=-1;
    int largest=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest])
        {
            if(res==-1 || arr[i]>arr[res])
            {
                res=i;
            }
        }
    }
    cout<<"Second largest element is:"<<arr[res];

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
    secol(arr,n);
}



