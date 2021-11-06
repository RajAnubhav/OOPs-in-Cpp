#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    // ******************************************************************************************************
    // this is the way to set a function with a user-defined data-type

    // void complex(Complex o1, Complex o2)
    // {
    //     a = o1.a + o2.a;
    //     b = o1.b + o2.b;
    // }
    friend Complex sumComplex(Complex o1, Complex o2);
    void generatedComplexNO()
    {
        cout << a << " +i" << b << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex c1, c2, c3;
    c1.setData(1, 3);
    c1.generatedComplexNO();

    c2.setData(2, 4);
    c2.generatedComplexNO();

    c3 = sumComplex(c1, c2);
    c3.generatedComplexNO();

    return 0;
}