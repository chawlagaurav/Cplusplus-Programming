#include<iostream>
using namespace std;
int powere(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    int temp=powere(x,n/2);
    temp=temp*temp;
    if(n%2==0)
    {
        return temp;
    }
    else{
        return temp*x;
    }
}
int main()
{
    int x,n;
    cout<<"Enter the number whose power is to be calculated:";
    cin>>x;
    cout<<"Enter the power:";
    cin>>n;
    cout<<"The result is"<<powere(x,n);
}
