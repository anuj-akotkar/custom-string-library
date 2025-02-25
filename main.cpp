#include <iostream>
#include "MyString.h"
#include <string>

using namespace std;

int main()
{
    MyString a = "anuj";
    MyString b = "mystring ";
    a+=b;
    cout<<a<<endl;

    a.erase(70, 1);
    cout<<a<<endl;

    // string a = "my";
    // string b = " string";
    // string c = a + b;
    // cout<<c<<endl;
    return 0;
}