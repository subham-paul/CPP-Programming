#include <iostream>
using namespace std;
void count(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    count(n - 1);
    cout << n << endl;
}
int main()
{
    cout << "Enter number print count : " << endl;
    int n;
    cin >> n;
    cout << "its your output" << endl;
    count(n);
    return 0;
}