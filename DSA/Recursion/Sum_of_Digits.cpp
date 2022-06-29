#include<iostream>
using namespace std;
int getsum(int n)
{
    if(n<1)
    {
        return 0;
    }
    return getsum(n/10) + n%10;
}
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    cout<<getsum(n);
}