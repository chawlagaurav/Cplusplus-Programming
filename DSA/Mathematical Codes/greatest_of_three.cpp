#include<iostream>
using namespace std;
int greatestOfThree(int A, int B, int C) {
        if(A>=B && A>=C)
        {
            return A;
        }
        else if(B>C && B>A)
        {
            return B;
        }
        else if(C>A && C>B)
        {
            return C;
        }
    }
int main()
{
    int A,B,C;
    cout<<"Enter three numbers";
    cin>>A>>B>>C;
    cout<<greatestOfThree( A, B, C);
    

}