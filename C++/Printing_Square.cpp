#include<iostream>
using namespace std;
void psq(int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int i=0;i<n-2;i++)
    {
       for(int i=0;i<n;i++)
      {
        if(i==0)
        {
            cout<<"*";
        }
        else if(i==(n-1))
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
      }
      cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"*";
    }
    
}
int main()
{
    int n;
    cout<<"Enter size of the sqaure:";
    cin>>n;
    psq(n);
}