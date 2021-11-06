#include <iostream>
using namespace std;

class OfficeEmployees
{
private:
    int emp_id;
    int emp_salary;
    string emp_name;

public:
    int emp_desk_no;

    void setData(int id1, int salary1, string name);
    void display();
};

void OfficeEmployees::setData(int id1, int salary1, string name) // this is the way to declare the private variables
{
    emp_id = id1;
    emp_salary = salary1;
    emp_name = name;
}

void OfficeEmployees::display()
{
    cout << "Name : " << emp_name << endl;
    cout << "Salary : $" << emp_salary << endl;
    cout << "Emp Id : " << emp_id << endl;
    cout << "Desk No : " << emp_desk_no << endl;
}

int main()
{
    OfficeEmployees Harish;
    Harish.emp_desk_no = 21;
    Harish.setData(101, 20000, "Harish Kumar");
    Harish.display();

    cout << endl;

    OfficeEmployees Satwik;
    Satwik.emp_desk_no = 32;
    Satwik.setData(105, 35000, "Satwik Shubham");
    Satwik.display();

    cout<<endl;

    OfficeEmployees Ramesh;
    Ramesh.emp_desk_no = 11;
    Ramesh.setData(102, 34000, "Ramesh Caurasiya");
    Ramesh.display();

    return 0;
}