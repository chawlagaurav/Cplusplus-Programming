#include<iostream>
using namespace std;
int trail(int n)
{
    int count=0;
    for(int i=5;i<=n;i=i*5)
    {
        count=count+ n/i;
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter the number whose trailing zeroes need to be calculated:";
    cin>>n;
    cout<<"No of trailing zeroes are:"<<trail(n);
}