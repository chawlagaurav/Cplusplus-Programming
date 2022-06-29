#include<iostream>
using namespace std;
int countd(int n)
{
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    cout<<"Number of digits in this number is:"<<countd(n);
}