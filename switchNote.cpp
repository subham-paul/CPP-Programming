#include <iostream>
using namespace std;
int main()
{

    int number;
    cout << "Enter the number:" << endl;
    cin >> number;

    switch (1)
    {
    case 1:
        cout << "The Number of 100 Rupees notes: ";
        cout << (number / 100) << endl;
        number = number % 100;
    case 2:
        cout << "The Number of 50 Rupees notes: ";
        cout << (number / 50) << endl;
        number = number % 50;
    case 3:
        cout << "The Number of 20 Rupees notes: ";
        cout << (number / 20) << endl;
        number = number % 20;
    case 4:
        cout << "The Number of 10 Rupees notes: ";
        cout << (number / 10) << endl;
        number = number % 10;
    }

    return 0;
}