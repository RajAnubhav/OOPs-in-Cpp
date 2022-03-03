// There are three types of constructors
// 1. Default constructors
// 2. Parameterized constructors
// 3. Copy constructors

// here we will be discussing only Paramatized and Default Constructors

// 1. Default Constructors: Default constructor is the constructor which 
// doesn’t take any argument. It has no parameters.

// 2. Parameterized Constructors: It is possible to pass arguments to constructors. 
// Typically, these arguments help initialize an object when it is created. 
// To create a parameterized constructor, simply add parameters to it the way 
// you would to any other function. When you define the constructor’s body, 
// use the parameters to initialize the object. 

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    //Creating a Constructor
    Complex(int, int); // declaration of the constructor 
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i " << endl;
    }
};
Complex ::Complex(int x, int y) // this is parameterized constructer
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


// <<<<<<<----------   output   ------------->>>>>>>>>>>
/*
Your number is 4 + 6i 
Your number is 5 + 7i
*/
