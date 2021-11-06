#include <iostream>
using namespace std;

// this is the example of run-time polymorphism --> which can be achieved with the help of the pointers
class Base
{
public:
    int var_base;
    void display()
    {
        cout << "Base class variable var_base " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;
    void display()
    {
        cout << "Base class variable var_base called by derived class " << var_base << endl;
        cout << "Derived class variable var_derived " << var_derived << endl;
    }
};
int main()
{
    Base *base_class_pointer;
    Base obj_base;
    Derived obj_derived;
    base_class_pointer = &obj_derived;

    Derived *derived_class_pointer;
    derived_class_pointer = &obj_derived;

    // by default base calss is only invoked
    derived_class_pointer->var_base = 12;
    base_class_pointer->var_base = 24;

    derived_class_pointer->var_derived = 36;
    base_class_pointer->display();
    derived_class_pointer->display();
    return 0;
}