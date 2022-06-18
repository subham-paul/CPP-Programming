#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int sub(int a, int b)
{
    int c;
    c = a - b;
    return c;
}

int main()
{

    int a, b;
    cout << "enter 1st number " << endl;
    cin >> a;

    cout << "enter 2nd number " << endl;
    cin >> b;

    cout << "return sum of the function " << sum(a, b) << endl;
    cout << "return sub of the function " << sub(a, b) << endl;

    return 0;
}