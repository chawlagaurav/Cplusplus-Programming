#include<iostream>
using namespace std;
void nom(int n,char A,char B, char C)
{
    if(n==1)
    {
        cout<<"Move 1 from "<<A<<"to"<<C<<endl;
        return;
    }
    nom(n-1,A,C,B);
    cout<<"Move disk from"<<A<<"to"<<C<<endl;
    nom(n-1,B,A,C);
}
int main()
{   int n;
    cout<<"Enter the number of disks";
    cin>>n;
    nom(n,'A','B','C');
}