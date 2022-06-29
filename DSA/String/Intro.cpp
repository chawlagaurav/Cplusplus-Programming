#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string n;
    cout<<"Enter company name:";
    cin>>n;
    int count[26]={0};
    for(int i=0;i<n.length();i++)
    {
        count[n[i]-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        if(count[i]>0)
        {
            cout<<char(i+'a')<<" "<<count[i]<<endl;
        }
    }
}