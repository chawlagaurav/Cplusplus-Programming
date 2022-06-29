/***************************** C Style Strings *********************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[]="gfg"; //we used double quote because it will automatically include \0 at last for null turmination
    cout<<str;
}

//Functions in C style string
 
 strlen(str);    //return length along with length of \0
 strcmp(s1,s2);  //compares two string lexicographically, if 1st string is greater,it will give +ve number, if equal,it will give 0 else -ve
 strcpy(str,"gfg");  //if we dont initialise str at time of declaring, we cant assign as like normal int, we use this func, assign gfg to str



/***************************** C++ Style Strings *********************************/


//Basic Function in c++ style string
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str = "geeksforgeeks";
    cout << str.length() << " ";     //this will give length of the string
    str = str + "xyz";               //this will concatenate xyz at end
    cout << str << " ";              
    cout << str.substr(1, 3) << " "; //This will give us substring starting from index 1 of length 3.
    cout << str.find("eek") << " ";  //It will return first occurence of eek
    return 0;
}

//To get user input without line break

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str;
    cout << "Enter your name";
    getline(cin, str);
    cout << "\nYour name is " << str;
    return 0;
}


//by default,getline stops when we hit enter but if we want to modify this, we can insert a character, so when it sees that,it will stop
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str;
    cout << "Enter your name";
    getline(cin, str, 'a');
    cout << "\nYour name is " << str;
    return 0;
}


//Traversal in c++

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str = "geeksforgeeks";
    for (int i = 0; i < str.length(); i++)
        cout << str[i];
    cout << endl;
    for (char x: str)
        cout << x;
}
