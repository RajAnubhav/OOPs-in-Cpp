//Constructor Overloading
#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }

    Complex(int x)
    {
        x = a;
    }

    Complex(int x, int y)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c(1, 3);
    c.displayPoint();
    return 0;
}