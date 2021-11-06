// Making arrays of objects
#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData(void)
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
    void setComplelx(void)
    {
        cout << "The complex number is " << real << " +i" << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    // Complex *ptr = new Complex;
    // (*ptr).setData(1, 54);// use brackets () bcoz . has higher precedence
    // (*ptr).getData();

    // Array of objects
    Complex *ptr = new Complex[4];
    ptr->setData(1, 4);
    ptr->getData();
    ptr->setComplelx();

    cout << endl;

    Complex *htr = new Complex;
    htr->setData(2, 5);
    htr->getData();
    htr->setComplelx();

    return 0;
}