#include<bits/stdc++.h>
#include<vector>
using namespace std;
void sieve(int n)
{
    vector<bool>isprime(n+1,true);
    {
        for(int i=2;i<=n;i++)
        {
            if(isprime[i])
            {
                cout<<i;
                
                for(int j=i*i;j<=n;j=j+i)
                {
                    isprime[j]=false;
                }
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number before which you want to find prime numbers:";
    cin>>n;
    sieve(n);



}