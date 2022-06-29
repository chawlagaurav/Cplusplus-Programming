// In this , we are given length of a rope n and we need to cut into maximum number of pieces in lengths given as a,b and c.

#include<bits/stdc++.h>
using namespace std;
int rope(int n,int a,int b,int c)
{
    if(n==0)
    {
        return 0;
    }
    if(n<0)
    {
        return -1;
    }
    int res= max(rope(n-a,a,b,c),max(rope(n-b,a,b,c),rope(n-c,a,b,c)));
    if(res<0)
    {
        return -1;
    }
    return (res+1);

}
int main()
{
    int n,a,b,c;
    cout<<"Enter length of rope:";
    cin>>n;
    cout<<"Enter length of three pieces";
    cin>>a>>b>>c;
    cout<<"Number of pieces "<<rope(n,a,b,c);
}