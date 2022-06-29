#include<iostream>
using namespace std;
int gcd(int a,int b)  //Euclidian Algorithm
{
    while(a!=b)
    {
      if(a>b)
       {
        a=a-b;
       }
      else
       {
        b=b-a;
       }
    }
    return a;
}
/* 
                 --------NAIVE APPROACH-------
int gcd(int a,int b)
{
    if(a>b)
    {
        for(int i=b;i>1;i--)
        {
            if(a%i==0 && b%i==0)
            {
                return i;
            }
        }
    }
    if(b>a)
    {
        for(int i=a;i>1;i--)
        {
            if(a%i==0 && b%i==0)
            {
                return i;
            }
        }
    }
    else
    return 0;

}
*/
int main()
{
    int a,b;
    cout<<"Enter two  number:";
    cin>>a>>b;
    cout<<"GCD of this number is:"<<gcd(a,b);
    
}