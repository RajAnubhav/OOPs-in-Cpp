// Friend Class
#include <iostream>
using namespace std;

// Forward Declaration of the class
class complex;

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

    Calculator calc;
    int real = calc.sumRealComplex(o1, o2);
    int comp = calc.sumCompComplex(o1, o2);

    return 0;
}