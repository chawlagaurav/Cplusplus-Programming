#include<iostream>
using namespace std;
void divi(int n)
{
    int i;
    for( i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
    for(;i>=1;i--)
    {
        if(n%i==0)
        {
            cout<<n/i<<" ";
        }
    }
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Divisors of that numbers are:";
    divi(n);
}