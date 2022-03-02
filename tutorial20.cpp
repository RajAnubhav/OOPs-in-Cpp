#include<iostream>
using namespace std;

class Employee{
    // private and public are the access specifiers

    // In private: members cannot be accessed from outside the class
    private:
    int a, b, c;
    string name;

    // In public: members can be accessed from outside the class
    public:
    int d, e;

    void setData(string name1, int a1, int b1, int c1);
    // this is the declaration of the variables

    void getData(){
        cout<<"Name is "<<name<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};

void Employee:: setData(string name1, int a1, int b1, int c1){
    // this is the inheritance property
    // that is the setData() function is inheriting the values
    // and functions of Employee class

    // this is assigning the values to the local variables of setData() funcition
    name = name1;
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    // making of an object of the class Employee
    Employee anu;
    anu.d = 24;
    anu.e = 5;
    anu.setData("Anubhav", 1, 2, 4);
    anu.getData();

    // making second object of the same class
    Employee ami;
    ami.d = 31;
    ami.e = 51;
    ami.setData("Amiyanshu", 2, 5, 7);
    ami.getData();

    return 0;
}

/*
the inference of the class is that :
we can use multiple object to call the values or variables in the same class
*/

// <<<<<<----------   Output of the program is   --------->>>>>>>
/*
Name is Anubhav
The value of a is 1
The value of b is 2
The value of c is 4
The value of d is 24
The value of e is 5
Name is Amiyanshu
The value of a is 2
The value of b is 5
The value of c is 7
The value of d is 31
The value of e is 51
*/
