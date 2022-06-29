// We have a formula for this i.e. (a*b)=lcm(a,b)*gcd(a,b)  , So by using this we can find lcm.

#include<iostream>
using namespace std;
int gcd(int a , int b)
{
    while(a!=b)
    {
    if(a>b)
    {
        a=a-b;
    }
    else
    {
        b=b-a;
    }
    }
    return a;
}

int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);

}
int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<"LCM  of these numbers is:"<<lcm(a,b);
}