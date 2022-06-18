#include <bits/stdc++.h> //use for all header files
using namespace std;
int sum(int n)
{
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        total += i;
    }
    return total;
}
int main()
{
    int n;
    cout << "enter number ";
    cin >> n;

    cout << "Sum of the natural number is " << sum(n);
    return 0;
}