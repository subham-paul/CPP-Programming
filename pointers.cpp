#include<iostream>
using namespace std;
int main(){

    int a = 35;
    int* ptrb;
    ptrb = &a; //&a means address of, mainly a's value store in ptrb
    // cout<<ptrb<<endl; //for a variable's address printing
    // cout<<*ptrb<<endl; // for variable value print
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of a is "<<*ptrb<<endl;
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<ptrb<<endl;

    return 0;
}