#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << a << " is max number" << endl;
    }
    else if (b > a && b > c)
    {
        cout << b << " is max number" << endl;
    }
    else
    {
        cout << c << " is max number" << endl;
    }

    return 0;
}