#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=10;
    int *x = &n; //here we are declaring a pointer variable x that is storing address of variable n
    cout<<*x<<endl; //when we do this, it will print the value stored at the address present in x that is 10
    cout<<x<<endl; //by doing this, it will simply print address stored in x;
    *x= *x+40; // this will make change in the value of n and add 40 to that which will result in 50
    cout<<*x;

}

// Always initialise a pointer at time of declaration , because not doing so will result in accessing of random address in that which 
// will point to some random value, this may create segmentation fault

/*

int *p1;
double *p2;
char *p3;
cout<<sizeof(*p1);
cout<<sizeof(*p2);
cout<<sizeof(*p3);

These three will give same output because pointer variable only stores the size, either it is of int,double or char


---APPLICATIONS OF POINTERS--

#include <iostream>
using namespace std;

void swap(int *p1, int *p2)    we create pointer variable to recieve address of x and y
    {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
int main()
    {
        int x = 10, y = 20;
        swap(&x, &y);                         Address of these variables is passed here
        cout << x << " " << y << " ";
        return 0;
    }



--ACCESSING ARRAY ELEMENTS--


int main()
{
    int call(int* arr)
    {
        
    }
    int arr[4]={1,2,3,4};
    int *ptr=arr;
    cout<<*(ptr+2);

    call(arr)
}



