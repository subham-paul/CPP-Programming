#include <iostream>
using namespace std;

class Dog
{
public:
    int sl_no;
    string name;
    int age;
};

int main()
{

    Dog dog1;
    dog1.sl_no = 01;
    dog1.name = "Bozo";
    dog1.age = 10;

    cout << dog1.name;
    return 0;
}