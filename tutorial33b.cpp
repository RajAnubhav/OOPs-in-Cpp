// Basics of Object Oriented Programming

#include <iostream>
using namespace std;

class Employee
{
    int employeeId;
    int employeeSalary;
    friend void displayData();

public:
    void setData(int a, int b)
    {
        employeeId = a;
        employeeSalary = b;
    }
    void displayData();
};

void Employee::displayData()
{
    cout << "The Employee Id is " << employeeId << " and the Employee Salary is $ " << employeeSalary << endl;
}

int main()
{
    Employee e1, e2;
    e1.setData(1, 10000);
    e1.displayData();

    e2.setData(2, 20000);
    e2.displayData();
    return 0;
}