// Given an array arr[] of size n. For every i from 0 to n-1 output max(arr[0], arr[1],...., arr[i]).

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value ";
    cin >> n;
    int mx = -111999999;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << endl;
    }
    return 0;
}