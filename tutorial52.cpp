// this pointer
#include <iostream>
using namespace std;
class A
{
    int a; // this is a class variable

public:
    // A & setData(int a) // in c++ local variable is given more preferance
    // {
    //     this->a = a;
    //     return *this;
    // }
    void setData(int a){
        this->a=a;
    }
    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    // this is a keyword which is a pointer which points to the object which invokes the member function
    A a;
    a.setData(4);
    a.getData();
    // asetData(4).getData();
    return 0;
}