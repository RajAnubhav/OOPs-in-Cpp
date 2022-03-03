// constructors

/*
    A constructor in C++ is a special method that is
    automatically called when an object of a class is created.
*/

#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    // This is how we are Creating a Constructor

    Complex(void); // name the function same as the class
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i " << endl;
    }
};

Complex ::Complex(void) // declaring the function (here -> constructor) outside the class
{
    // constructor is generally used to initialize the values of the variables
    a = 10;
    b = 20;
}
int main()
{
    Complex c;
    // c is the object of the class Complex
    c.printNumber();
    return 0;
}

// <<<<<<<<<---------     output    -------------->>>>>>>>>>>
/*
Your number is 10 + 20i 
*/
