#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str = "abcdefgh";
    // string str1 = "ABCDEFGH";

    // // For convert uppercase
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i] >= 'a' && str[i] <= 'z')
    //     {
    //         str[i] -= 32;
    //     }
    // }

    // // For convert lowercase
    // for (int i = 0; i < str1.length(); i++)
    // {
    //     if (str1[i] >= 'A' && str1[i] <= 'Z')
    //     {
    //         str1[i] += 32;
    //     }
    // }

    // cout << str << endl;
    // cout << str1 << endl;

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << endl;

    return 0;
}