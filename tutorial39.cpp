// Multi-level Inheritence
#include <iostream>
using namespace std;

// ABC is the inheritance path => A ---> B ---> C 

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}
void Student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}
class Exam : public Student // inheritance
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::get_marks()
{
    cout << "The marks obtained in Maths are: " << maths << endl;
    cout << "The marks obtained in Physics are: " << physics << endl;
}

class Result : public Exam // inheritance
{
    float percentage;

public:
    void displayResult()
    {
        get_roll_number();
        get_marks();
        cout << "Your Result is " << (maths + physics) / 2 << "%"<<endl;
    }
};

int main()
{
    Result harry;
    harry.set_roll_number(110);
    harry.set_marks(94.0, 90.0);
    harry.displayResult();
    return 0;
}