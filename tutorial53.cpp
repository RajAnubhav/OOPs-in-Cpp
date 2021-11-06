// Polymorphism ---> one name multiple forms
// Compile Time polymorphism / Early Binding --> eg. function overloading, operator overloading
// Run Time Polymorphism --> eg. Virtual Functions ---> Pointers to derived class
#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "Displaying Base class variabke var_base " << var_base << endl;
        cout << "Displaying Derived class variable var_derived " << var_derived << endl;
    }
};
// this is called the run-time polymorphism
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    // obj_derived.display();
    base_class_pointer = &obj_derived;

    // we cannot derive derived class display using baseClassPointer -> it will only display baseClass display
    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived=134;// this will throw an error
    // base_class_pointer->display();

    DerivedClass *derived_classs_pointer;
    derived_classs_pointer = &obj_derived;
    derived_classs_pointer->var_derived = 134;
    derived_classs_pointer->var_base = 11;
    derived_classs_pointer->display();
    return 0;
}