#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    int *p = &num;
    // cout << num << endl; // num value
    // cout << *p << endl; // print num value
    // cout << &num << endl; // print num add
    // cout << p << endl; // print num add

    int *q = p;
    cout<<*q<<endl; // print 'P' value
    cout<<q<<endl; // print 'p' add
    cout<<&q<<endl; // print 'q' add


}
