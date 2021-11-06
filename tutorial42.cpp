// Ambiguity Resolution in Inheritance

#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you? " << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho? " << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;
    public:
    void greet(){ // specify the name of the base class along with the member function or we can use virtual base function
        Base2::greet(); // this is the way through which we solve the ambiguity in multiple inheritance
    }
};

int main()
{
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();

    Derived d;
    d.greet();

    return 0;
}