#include<bits/stdc++.h>
using namespace std;
void tabled(int n1,int n2)
{
    int a,b;
    for(int i=1;i<=10;i++)
    {
        a=n1*i;
        b=n2*i;
        cout<<abs(a-b)<<" ";
        a=0;
        b=0;

    }
}
int main()
{
    int n1,n2;
    cout<<"Enter two numbers";
    cin>>n1>>n2;
    tabled(n1,n2);

}