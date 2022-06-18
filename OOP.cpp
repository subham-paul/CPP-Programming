#include <iostream>
using namespace std;

class student
{
    string name; //Private
public:
    // string name;
    int age;
    bool gender;

    student(string s, int a, int g)
    {
        name = s;
        age = a;
        gender = g;
    } //Constructor

    // student(){
    //     cout<<"Default Constructor" <<endl;
    // } //Default const

    student(string s, int a, int g)
    {
        cout << "Parameterised Constructor" << endl;
        name = s;
        age = a;
        gender = g;
    } //Parameterised Constructor

    student(student &a)
    {
        cout << "Copy Constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    void setName(string s)
    { //for value input
        name = s;
    }

    void getName()
    { //for value print
        cout << name << endl;
    }

    void printInfo()
    {
        cout << "Name= ";
        cout << name << endl;
        cout << "age= ";
        cout << age << endl;
        cout << "gender= ";
        cout << gender << endl;
    }

    ~student()
    {
        cout << "Destructor called" << endl;
    }

    // bool operator==(student &a)
    // {
    //     if (name == a.name &&age = a.age && gender == a.gender)
    //     {
    //         return true;
    //     }
    //     return false;
    // }
};

int main()
{
    // student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     string s;
    //     cout << "Name= ";
    //     cin >> s;
    //     arr[i].setName(s);
    //     cout << "age= ";
    //     cin >> arr[i].age;
    //     cout << "gender= ";
    //     cin >> arr[i].gender;
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printInfo();
    // }

    student a("Subham", 20, 1); // here a is constructor
    // a.getName();
    // a.printInfo();
    student b("Rahul", 21, 1);
    student c = a;
    if (c == a)
    {
        cout << "same" << endl;
    }

    return 0;
}