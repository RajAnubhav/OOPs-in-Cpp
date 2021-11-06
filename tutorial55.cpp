// Virtual-functions
// based on pointer_to_derived class and polymorphism
#include <iostream>
using namespace std;

class Base
{
public:
    int var_base = 1;
    virtual void display()
    {   // because of this virtual keyword this derived_class_pointer will point to the Derived class function void display()
        cout << "1. Base class variable " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "2. Base class variable " << var_base << endl;
        cout << "3. Derived class variable " << var_derived << endl;
    }
};
// polymorphism -> objects of different class point to same task
int main()
{
    Base *base_class_pointer;
    Derived obj_derived;
    base_class_pointer->var_base = 10;
    base_class_pointer = &obj_derived;
    base_class_pointer->var_base = 11;
    base_class_pointer->display();

    Derived *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 22;
    derived_class_pointer->display();
    return 0;
}