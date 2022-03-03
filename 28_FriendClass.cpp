// Friend Class

/*
What is the use of friend class?
You can use the friend keyword to any class to declare
it as a friend class. This keyword enables any class to
access private and protected members of other classes
and functions.
*/

#include <iostream>
using namespace std;

// Forward Declaration of the class
class complex;
// this is how we are letting the compiler know in advanced about the Complex class

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(complex, complex); // first declaration of the function
    int sumCompComplex(complex, complex);
};

class complex
{
    int a, b;
    // delaring few functions of the class as a friend
    // friend int Calculator ::sumRealComplex(complex o1, complex o2); // friend class
    // friend int Calculator ::sumCompComplex(complex o1, complex o2);

    // declaring whole class as the friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// this is how we can use friend functions
int Calculator::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int Calculator::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    o1.printNumber();

    Calculator calc;
    int real = calc.sumRealComplex(o1, o2);
    int comp = calc.sumCompComplex(o1, o2);


    return 0;
}
// By making the class as friend class we can accesss the private and protected members
// of a class in which it is declared as friend.

// <<<<<<<---------    output    ---------->>>>>>>>>
/*
Your number is 1 + 4i
*/
