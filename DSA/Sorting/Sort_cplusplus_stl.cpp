#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n); //here we pass two parameters,one is pointing to first element and one after last
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }   
    cout<<endl;
    sort(arr,arr+n,greater<int>()); //this third parameter reverses the order
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    } 
}

//  ----------For verctors----------

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
	
//     vector<int> v={10,20,5,7};
	
// 	sort(v.begin(),v.end());
	
// 	for(int x: v)
// 	    cout<<x<<" ";
	
// 	sort(v.begin(),v.end(),greater<int>());
	
// 	cout<<endl;
// 	for(int x: v)
// 	    cout<<x<<" ";
// }