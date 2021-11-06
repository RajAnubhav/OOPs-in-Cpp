// Inheritance in C++
#include <iostream>
using namespace std;

// Base Class
class Employee 
{
public:
    float salary;
    int id;
    Employee() {}
    Employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
    ~Employee()
    {
        cout << "Destructor is called" << endl;
    }
};

// Derived Class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note: 
1. Default visibility mode is private
2. Private visibility mode: Public members of the base class becomes the private members of the derivated class
3. Public visibility mode: Public members of the base class becomes the public members of the derivated class
4. Private members are never inherited
*/

class Programmer : public Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillf(1);
    cout << skillf.languageCode << endl;
    cout << skillf.id << endl;
    skillf.getData();
    return 0;
}