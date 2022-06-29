#include<iostream>
using namespace std;
bool chk(int n)
{
    if(n==0)
    {
        return 0;
    }
    return ((n&(n-1))==0);  //here the ideA is of brian algo, we will count set bits, if the set bit is only 1,then it's done
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<chk(n);
}