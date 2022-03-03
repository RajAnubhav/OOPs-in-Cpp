// Passing of objects in the methods
#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDataBySum(complex o1, complex o2) // the object has been passed
    {
        // here we have declared the objects similar to the variables 
        // as we pass the variables in the functions
        // here we are passing the objects o1 and o2
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    // this function is used to print the output
    void printNo()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNo();

    c2.setData(3, 4);
    c2.printNo();

    c3.setDataBySum(c1, c2);
    c3.printNo();

    return 0;
}

// <<<<<<<--------   output   ----------->>>>>>>>>>>
/*
Your complex number is 1 + 2i
Your complex number is 3 + 4i
Your complex number is 4 + 6i
*/
