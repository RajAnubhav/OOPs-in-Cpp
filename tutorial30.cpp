// Paramatized and Default Constructor
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    //Creating a Constructor
    Complex(int, int);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i " << endl;
    }
};
Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    // Implicit call
    Complex a(4, 6);

    //Explicit Call
    Complex b(5, 7);

    a.printNumber();
    b.printNumber();
    return 0;
}