
//    Digital root is a number that is generated when we sum up all the digits of the given number, we do the sum again and again until we get 
//    single digit number      for ex 444  4+4+4=12    1+2=3   so 3 is digital root of 444
#include<iostream>
using namespace std;
int sumdigit(int n)
{
    if(n/10==0)
    {
        return n;
    }
    else{
        return (n%10 + sumdigit(n));
    }
}
int digitalroot(int n)
{
    if(n/10==0)
    {
        return n;
    }
    else
    {
        return digitalroot(sumdigit(n));
    }
}
int main()
{
    int n;
    cout<<"Enter that number";
    cin>>n;
    cout<<digitalroot(n);
}