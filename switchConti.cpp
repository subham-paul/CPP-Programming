// #include <bits/std++h>
#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    switch (n)
    {
    case 5:
        cout<<"you enter 5";
        break;
    case 10:
        cout<<"you enter 10";
        break;
        // continue; 
    case 50:
        cout<<"you enter 50";
        break;
    
    default:
        cout<<"you enter wrong value";
        break;
    }
    return 0;
}