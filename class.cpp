#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    void printDetails()
    {
        cout << "Name of our 1st employee is " << this->name << " and his salary is " << this->salary << " $" << endl;
    }
};

int main()
{

    Employee sub;
    sub.name = "SUBHAM";
    sub.salary = 100;
    sub.printDetails();

    //cout<< "Name of our 1st employee is "<< sub.name << " and his salary is "<< sub.salary<<" $"<<endl;

    return 0;
}