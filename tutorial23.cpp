// this is the static data member
#include <iostream>
using namespace std;

class Employee
{
    static int count; // the value of count is constant
    int id;

public:
    void setData(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }
    // with the help of the staic variable we don't need to increase the no of codes this will automatically increment the value in the variable
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
};

int Employee::count = 1000;
int main()
{
    Employee harry, rohan, lovish;
    harry.setData();
    harry.getData();

    rohan.setData();
    rohan.getData();

    lovish.setData();
    lovish.getData();
    return 0;
}