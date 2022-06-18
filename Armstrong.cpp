#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "enter number ";
    cin >> n;
    int sum = 0;
    int original = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += pow(lastDigit, 3);
        n = n / 10;
    }
    if (sum == original)
    {
        cout << "ARMSTRONG NUMBER" << endl;
    }
    else
    {
        cout << "NOT AN ARMSTRONG NUMBER" << endl;
    }

    return 0;
}