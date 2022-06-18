#include <bits/stdc++.h>
// #include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    int arr[n];
    cout << "how many numbers you can input ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter value ";
        cin >> arr[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }

    cout << "Max number " << maxNo << endl;
    cout << "Min number " << minNo << endl;

    return 0;
}