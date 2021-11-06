// Simple Exercise on Multiple Inheritance

#include <iostream>
#include <math.h>
using namespace std;
/* 
    create two classes 
    1. simple calculator - Takes input of two numbers using a utility functions
    2. scientific calculator - Takes input of two numbers using a utility functions and performs any four scientific operations of your choice
        and display the result using another utility function
    
    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of inheritence are you using? ---> Multiple Inheritance
    Q2. Which mode of inheritance are you using? ---> Public
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented?

*/
class SimpleCalculator
{
    int num1, num2;

public:
    void sum(int, int);
    void difference(int, int);
    void multiply(int, int);
    void division(int, int);
};

void SimpleCalculator::sum(int a, int b)
{
    cout << "The sum of " << a << " and " << b << " is " << a + b << endl;
}
void SimpleCalculator::difference(int a, int b)
{
    cout << "The difference of " << a << " and " << b << " is " << a - b << endl;
}
void SimpleCalculator::multiply(int a, int b)
{
    cout << "The product of " << a << " and " << b << " is " << a * b << endl;
}
void SimpleCalculator::division(int a, int b)
{
    if (b == 0)
    {
        cout << "Divided by zero error " << endl;
        exit(0);
    }
    cout << "The quotient of " << a << " and " << b << " is " << a / b << endl;
}

class ScientificCalculator
{
    float number;

public:
    void sineFun(float);
    void cosine(float);
    void tangent(float);
    void cot(float);
};

void ScientificCalculator::sineFun(float num)
{
    cout << "The sine of " << num << " is " << sin(num) << endl;
}
void ScientificCalculator::cosine(float num)
{
    cout << "The cosine of " << num << " is " << cos(num) << endl;
}
void ScientificCalculator::tangent(float num)
{
    cout << "The tangent of " << num << " is " << tan(num) << endl;
}
void ScientificCalculator::cot(float num)
{
    cout << "The cotangent of " << num << " is " << 1 / tan(num) << endl;
}

class HybridCalculator : public ScientificCalculator, public SimpleCalculator
{
public:
    int choice; //this will give the choice to the user to select the mode
    HybridCalculator()
    {
        choice = 0;
    }
    void Choice(int n)
    {
        choice = n;
    }
    void display()
    {
        int option1 = 0, option2, num1, num2;
        float number;
        if (choice == 0)
        {
            cout << "Simple Calculator " << endl;
            cout << "Four Operations can be performed in this Simple Calculator, namely " << endl;
            cout << "Sum ---> 1\nDifference ---> 2\nMultiplication ---> 3\nDivision --->" << endl;
            cin >> option1;
            cout << "Enter first number " << endl;
            cin >> num1;
            cout << "Enter second number " << endl;
            cin >> num2;
            switch (option1)
            {
            case 1:
                sum(num1, num2);
                break;
            case 2:
                difference(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                division(num1, num2);
                break;

            default:
                cout << "Invalid operation entered " << endl;
                break;
            }
        }
        else if (choice == 1)
        {
            cout << "Scientific Calculator " << endl;
            cout << "Four operations can be performed in this Scientific Calculator, namely " << endl;
            cout << "Sine ---> 1\nCosine ---> 2\nTangent ---> 3\nCotangent ---> 4" << endl;
            cin >> option2;
            cout << "Enter number for the requied function " << endl;
            cin >> number;
            number = (number * 3.1412) / 180;
            switch (option2)
            {
            case 1:
                sineFun(number);
                break;
            case 2:
                cosine(number);
                break;
            case 3:
                tangent(number);
                break;
            case 4:
                cot(number);
                break;

            default:
                cout << "Data not sufficient to undergo this function " << endl;
                break;
            }
        }
        else
        {
            cout << "Invalid input " << endl;
        }
    }
};

int main()
{
    HybridCalculator hbc;
    cout << "Enter the choice :\n 0 for Simple Calculator\n 1 for Scientific Calculator" << endl;
    int n1;
    cin >> n1;
    hbc.Choice(n1);
    int stop = 1;
    while (stop != 0)
    {
        hbc.display();
        cout << "Enter 0 to stop" << endl;
        cin >> stop;
        if (stop == 0)
        {
            exit(0);
        }
        cout << "Enter the choice :\n 0 for Simple Calculator\n 1 for Scientific Calculator" << endl;
        int n2;
        cin >> n2;
        hbc.Choice(n2);
    }
    return 0;
}