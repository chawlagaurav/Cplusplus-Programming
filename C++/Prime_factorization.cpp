#include<iostream>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int primef(int n)
{
    for(int i=2;i<n;i++)
    {
        if(isprime(i))
        {
            int a=i;
            while(n%a==0)
            {
                cout<<i<<" ";
                a=a*i;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter a number to get its prime factors:";
    cin>>n;
    primef(n);
}