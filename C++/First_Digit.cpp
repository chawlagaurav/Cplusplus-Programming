#include<iostream>
using namespace std;
int firstd(int n)
{
    while(n>9)
    {
        n=n/10;
    } 
    return n;
}
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    firstd(n);
}