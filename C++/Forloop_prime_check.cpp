#include<bits/stdc++.h>
using namespace std;
string isprime(int n)
{
    bool flag=false;
    if(n<2)
    {
        return "No";
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=true;
            break;
        }

    }
    if(flag==false)
    {
        return "Yes";
    }
    else{
        return "No";
    }
}
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<isprime(n);
}