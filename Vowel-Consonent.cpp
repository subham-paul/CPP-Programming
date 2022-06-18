#include <iostream>
using namespace std;
int main()
{
    int lower, upper;
    char c;
    cout << "enter alphabet: ";
    cin >> c;

    lower = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    upper = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lower || upper)
    {
        cout << c << " is a vowel";
    }
    else
    {
        cout << c << " is a consonent";
    }

    return 0;
}