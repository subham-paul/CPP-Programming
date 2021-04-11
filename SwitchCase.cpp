#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "enter your age ";
    cin >> age;

    switch (age)
    {
    case 12:
        cout << "you are 12 years old";
        break;
    case 20:
        cout << "you are 20 years old";
        break;
    default:
        cout << "you are not 12 or 20 years";
        break;
    }

    return 0;
}