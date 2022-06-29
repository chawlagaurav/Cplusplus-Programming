#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp= *a;
    *a = *b;
    *b=temp;
    cout<<"A is now"<<*a<<endl;
    cout<<"B is noe"<<*b;
}
int main()
{
    int a,b;
    cout<<"Enter two values:";
    cin>>a>>b;
    swap(&a,&b);
}