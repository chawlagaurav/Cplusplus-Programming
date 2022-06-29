#include<bits/stdc++.h>
using namespace std;
void kbit(int n,int k)
{
    if(n&(1<<(k-1)))        //here we do 1 left shift by k-1 because we create a number in which only kth bit is set and then do and with n
    {
        cout<<"Yes it is set";  //if the number after and opeation is non zero, that means kth bit is set
    }
    else
    {
        cout<<"No";
    }
}
int main()
{
    int n,k;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Enter bit to check:";
    cin>>k;
    kbit(n,k);
}

//here we do it by right shift
// void kbit(int n,int k)
// {
//     if(1&(n>>(k-1)))        //we are moving the kth bit to 1 position so that we can check by performing and with 1
//     {
//         cout<<"Yes it is set";  //if the number after and opeation is non zero, that means kth bit is set
//     }
//     else
//     {
//         cout<<"No";
//     }
// }