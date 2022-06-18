#include <iostream>
using namespace std;

// 1 -> Prime No.
// 0 -> Not Prime No.
bool isPrime(int num)
{
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
        return true;
    }
}
int main()
{
    int a, b;
    cout << "enter number from start to end ";
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}