// Initialization list in Constructors

#include <iostream>
using namespace std;

/*
    Syntax for initialization in a constructor:
    constructor (argument-list) : initialization-section{
        assignment + other code;
    }

    Example:
    class Test{
        int a, b;
        public:
        Test(int i, int j): a(i), b(j){constructor body}
    };
*/

class Test
{
    int a, b;
    // int b,a;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j):a(i), b(i+j)
    // Test(int i, int j):a(i), b(a+j)
    //Test(int i, int j):b(j), a(i+b)// RED FLAG ---> this will create problem bcoz a will be initialized first
    Test(int i, int j)//:a(i)
    {
        a=i;
        b=j;
        cout << "Constructor Executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    Test t(4, 6);
    return 0;
}