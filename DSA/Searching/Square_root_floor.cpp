#include<iostream>
using namespace std;
int sqt(int x)
{
    int low=1,high=x,ans=-1;
    while(low<high)
    {
        int mid=(low+high)/2 ;
        int msq= mid*mid;
        if(msq==x)
        {
            return msq;
        }
        else if(msq>x)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
            ans=mid;
        }

    }
    return ans;
    
    
}
int main()
{
    int x;
    cout<<"Enter a number:";
    cin>>x;
    sqt(x);
}