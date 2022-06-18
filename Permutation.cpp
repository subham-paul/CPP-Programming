#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// using recusion and vector method
vector<vector<int>> ans;
void permute(vector<int> &a, int idx)
{
    if (idx == a.size())
    {
        ans.push_back(a);
        return;
    }
    for (int i = 0; i < a.size(); i++)
    {
        swap(a[i], a[idx]);
        permute(a, idx + 1);
        swap(a[i], a[idx]);
    }
    return;
}
int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    permute(a, 0);
    for (auto v : ans)
    {
        for (auto i : v)
            cout << i << " ";
        cout << "\n";
    }

    return 0;
}

// output 3
// 1 2 3