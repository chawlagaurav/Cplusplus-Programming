#include<bits/stdc++.h>
using namespace std;
bool subseq(string s,string a,int n,int m)
{
    int j=0;
    for(int i=0;i<n && j<m;i++)
    {
        if(s[i]==a[j])
        {
            j++;
        }
    }
    return(j==m);

}
int main()
{
    string s,a;
    cout<<"Enter the string";
    cin>>s;
    cout<<"Enter the subsequence to check:";
    cin>>a;
    int n= s.length();
    int m= a.length();
    if(subseq(s,a,n,m))
    {
        cout<<"Yes it is sub sequence";
    }
    else
    {
        cout<<"No, its not subsequence";
    }
}