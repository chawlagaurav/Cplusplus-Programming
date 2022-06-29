#include<bits/stdc++.h>
#include<string>
using namespace std;
bool palind(string s)
{
    int begin=0;
    int end= s.length()-1;
    while(begin<end)
    {
        if(s[begin]!=s[end])
        {
            return false;
        }
        begin++;
        end--;
    }
    return true;
}
int main()
{
    string s;
    cout<<"Enter a string:";
    cin>>s;
    if(palind(s)){
        cout<<"String is palindrome";
    }
    else
    {
        cout<<"String is not palindrome";
    }
}