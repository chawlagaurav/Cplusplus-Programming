#include<iostream>
using namespace std;
bool palin(string s,int start,int end)
{
    if(start>=end)
    {
        return true;
    }
    return ((s[start]==s[end])&&palin(s,start+1,end-1));
}
int main()
{
    string n;
    cout<<"Enter a string:";
    cin>>n;
    if(palin(n,0,n.length()-1))
    {
        cout<<"It is palindrome";
    }
    else
    {
        cout<<"It is not palindrome";
    }
}