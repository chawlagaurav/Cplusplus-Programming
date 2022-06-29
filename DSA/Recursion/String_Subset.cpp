#include<iostream>
using namespace std;
void subse(string s,string curr, int i)
{
    if(i==s.length())
    {
        cout<<curr<<" ";
        return;
    }
    subse(s,curr,i+1);
    subse(s,curr+s[i],i+1);
}
int main()
{
    string s;
    cout<<"Enter a string:";
    cin>>s;
    subse(s,"",0);
}