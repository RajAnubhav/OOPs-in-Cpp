// Multiple Inheritance

#include <iostream>
using namespace std;

// class Derived: visibility-mode base1, visibility-mode base2{};
class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of Base1 is " << base1int << endl;
        cout << "The value of Base2 is " << base2int << endl;
        cout << "The sum of these values is " << base1int + base2int << endl;
    }
};
/*
// The inherited derived class will look like this: 
// it will be protected

    base1int ---> protected
    base2int ---> protected

    Member functions:
    set_base1int() ---> public
    set_base2int() ---> public
    show() ---> public
*/
int main()
{
    Derived harry;
    harry.set_base1int(23);
    harry.set_base2int(5);
    harry.show();
    return 0;
}