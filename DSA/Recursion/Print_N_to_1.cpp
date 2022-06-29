 #include<iostream>
 using namespace std;
 int nto1(int n)
 {
     if(n<1)
     {
         return 0;
     }
     cout<<n<<" ";
     return nto1(n-1);
 }
 int main()
 {
     int n;
     cout<<"Enter a number:";
     cin>>n;
     nto1(n);
 }