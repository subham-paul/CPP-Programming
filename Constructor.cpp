#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }

    void printDetails()
    {
        cout << "Name of our 1st employee is " << this->name << " and his salary is " << this->salary << " $" << endl;
    }

    void getSecretPassword()
    {
        cout << "this secret password of employee is " << this->secretPassword;
    }

private:
    int secretPassword;
};

int main()
{

    Employee sub("subham constructor", 350, 1234);

    sub.printDetails();
    sub.getSecretPassword();

    return 0;
}