// this is the static data member

/*
The purpose of the static keyword in c++

When static keyword is used, variable or data members or 
functions can not be modified again. It is allocated for 
the lifetime of program. Static functions can be called 
directly by using class name. Static variables are 
initialized only once.
*/
#include <iostream>
using namespace std;

class Employee
{
    // we don't need to initialize the static data variable 
    // it is initalize with 0 by default
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


    // <<<<<------------    Summary   -------------->>>>>>>

    // before using static keyword
    // mere paas koi aisa tarika nhi hai, jisse mai 
    // kitne bhi employee hai unka count preserve kr k rkh sku
    // to do that we need static keyword
    // warna har object ka ek count hota

    /*
    When static keyword is used, variable or data members or 
    functions can not be modified again. It is allocated for 
    the lifetime of program. Static functions can be called 
    directly by using class name. Static variables are 
    initialized only once

    // we don't need to initialize the static data variable 
    // it is initalize with 0 by default
    // iska scope : inside the class
    // it time : jab tak program kthm nhi ho jata
    
    
    // we can also make a static member function 
    // then it will only be used to access the static variables
    */


    // <<<<<-------   output   -------------------->>>>>>>
    /*
    Enter the id: 
    12
    The id of this employee is 12 and this is employee number 1001
    Enter the id: 
    13
    The id of this employee is 13 and this is employee number 1002
    Enter the id:
    14
    The id of this employee is 14 and this is employee number 1003
    */
    return 0;
}
