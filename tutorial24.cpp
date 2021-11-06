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
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
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