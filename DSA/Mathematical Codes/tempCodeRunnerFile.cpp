#include<iostream>
using namespace std;
int iterativepo(int x, int n )
{
    int res=1;
    while(n>0)
    {
        if(n%2!=0)
          {
            res=res*x;
          }
          x=x*x;
          n=n/2;
    }
    return res;
    
}
int main()
{
    int x,n;
    cout<<"Enter the Number and its power";
    cin>>x>>n;
    cout<<"Iterative power is"<<iterativepo(x,n);
}