#include<bits/stdc++.h>
using namespace std;
void swap(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    swapi(x,y);
    cout<<x<<" "<<y<<" "; //here values of x and y will be printed as before , not swapped
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
void swap(int &x,int &y)   when i pass here by reference , then the change will be made to the variable
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    swapi(x,y);
    cout<<x<<" "<<y<<" ";   here x and y will be printed after swapping
    return 0;
}


