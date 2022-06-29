#include<iostream>
using namespace std;
int csb(int n)
{
    int res=0;
    while(n>0)
    {
        n=(n&(n-1)); //when we subtract 1 from a number , all the bits in right of last set bit turns on and last set bit turns off
        res++;       //so when we will do and with the original number, then last bit will be removed, like this we can remove all bits one by one
        
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Set bits are"<<csb(n);
}