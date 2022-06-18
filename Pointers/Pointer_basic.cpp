#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *b = &a;
    cout << a << endl; // print a's value
    cout << *b << endl; // print a's value
    cout << &a << endl; // print a's address
    cout << b +3  << endl; // print a's address
    // int *ptr;
    // cout<<*ptr;
    return 0;
}