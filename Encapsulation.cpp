// #include <bits/std++h>
#include <iostream>
using namespace std;
class A
{
public:
    int a;
    void funcA()
    {
        cout << "Func A " << endl;
    }

private:
    int b;
    void funcB()
    {
        cout << "Func B\n";
    }

protected:
    int c;
    void funcC()
    {
        cout << "Func C\n";
    }
};
int main()
{
    A obj;
    obj.funcA();
    // obj.funcB();
    return 0;
}