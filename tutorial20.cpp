// Object Oriented Programming
#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;
    string name;

public:
    int d, e;
    void setData(string name1, int a1, int b1, int c1); // Declaration
    void getData()
    {
        cout<<"Name is "<< name <<endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void Employee ::setData(string name1, int a1, int b1, int c1)
{ // this is the inheritence property
  // that is setData() inherited the values and functions of Employee class
    name = name1;
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee harry; // object of the class Employee
    harry.d = 34;
    harry.e = 45;
    harry.setData("harry",1, 2, 4);
    harry.getData();

    Employee karan;
    karan.d = 21;
    karan.e = 33;
    karan.setData("karan",2,5,7);
    karan.getData();

    return 0;
}