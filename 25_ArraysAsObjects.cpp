#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter Id of the Employee " << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The Id of this Employee is " << id << endl;
    }
};
int main()
{
    // Employee anubhav, rohan, amiyanshu, harshit;
    // anubhav.setId();
    Employee fb[4];
    // instead of making 4 different objects we can make use of arrays
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}

// <<<<<---------   OUTPUT   ------------->>>>>>
/*
Enter Id of the Employee 
1
The Id of this Employee is 1
Enter Id of the Employee    
2
The Id of this Employee is 2
Enter Id of the Employee
3
The Id of this Employee is 3
Enter Id of the Employee
4
The Id of this Employee is 4
*/
