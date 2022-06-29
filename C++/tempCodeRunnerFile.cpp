#include<iostream>
using namespace std;
int findNumberDivisible(int a,int b, int div)
{
    int count=0;
    for(int i=a;i<=b;i++)
    {
        if(i%div==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a,b,div;
    cin>>a;
    cin>>b;
    cin>>div;
    cout<<findNumberDivisible(a,b,div);
}