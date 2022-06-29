#include<bits/stdc++.h>
using namespace std;
int jos(int n,int k)
{
    if(n==1)
    {
        return 0;
    }
    return (jos(n-1,k)+k)%n;
}
int main()
{
    int n,k;
    cout<<"Enter the size of the persons";
    cin>>n;
    cout<<"Enter the person to be killed:";
    cin>>k;
    cout<<"Survivor is"<<jos(n,k);
 return 0;
}
