//static member function
#include <iostream>
using namespace std;

class Employee
{
    static int count;
    int id;

public:
    void setData(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id//static member function

/*
Why do we need static member function in C++?

The static member functions are special functions used to 
access the static data members or other static member 
functions. A member function is defined using the static 
keyword. A static member function shares the single copy 
of the member function to any number of the class' objects.
*/

#include <iostream>
using namespace std;

class Employee
{
    static int count;
    int id;

public:
    void setData(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void) // this is the static member function
    {
        cout << "The value of count is " << count << endl;
        // cout<<id; // throws an error
        // the error is : a nonstatic member reference must be relative to a specific object
    }
};

int Employee::count = 1000; // by default it is 1
int main()
{
    Employee anu, har, ami;
    anu.setData();
    anu.getData();
    Employee::getCount();

    har.setData();
    har.getData();
    Employee::getCount();

    ami.setData();
    ami.getData();
    Employee::getCount();
    return 0;
}

// <<<<<<<-----------   output   -------------->>>>>>>>>>>

/*
Enter the id: 
100
The id of this employee is 100 and this is employee number 1001
The value of count is 1001
Enter the id:
101
The id of this employee is 101 and this is employee number 1002
The value of count is 1002
Enter the id:
102
The id of this employee is 102 and this is employee number 1003
The value of count is 1003
*/ of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
        //cout<<id; // throws an error
    }
};

int Employee::count = 1000; // by default it is 1
int main()
{
    Employee harry, rohan, lovish;
    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();
    return 0;
}
