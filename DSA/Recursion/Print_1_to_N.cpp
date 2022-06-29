#include<iostream>
using namespace std;
int oneton(int n,int k)
{
    if(n<1)
    {
        return 0;
    }
    cout<<k<<" ";
    oneton(n-1,k+1);

}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    oneton(n,1);
}