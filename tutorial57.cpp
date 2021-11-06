#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number = 1;
    string name_of_student = "Atom";
    int class_of_student = 7;

public:
    void display1()
    {
        cout << "Name of the Student : " << name_of_student << endl;
        cout << "Class : " << class_of_student << endl;
        cout << "Roll Number of the student : " << roll_number << endl;
    }
    virtual void display() {}
};

class TestMarks : public Student
{
protected:
    float avgScore;

public:
    float maths = 90, physics = 98;
    void setData(int m1, int m2)
    {
        maths = m1;
        physics = m2;
    }
    void avgMarks()
    {
        avgScore = (maths + physics) / 20;
    }
    void display()
    {
        avgMarks();
        cout << "Marks Scored in Maths : " << maths << endl;
        cout << "Marks Scored in Physics : " << physics << endl;
        cout << "Thus, Average Score scored by the Student is : " << avgScore << endl;
    }
};

class SportsMarks : public Student
{
protected:
    float score = 9.7;

public:
    void display()
    {
        cout << "Marks scored in Sports : " << score << endl;
    }
};


class Result : public TestMarks, public SportsMarks
{
    float result_of_student;

public:
    void setResult()
    {
        result_of_student = (avgScore + score) / 2;
        cout << "Net Marks Obtained out of 10 : " << result_of_student << endl;
    }
    void display()
    {
        setResult();
        if (result_of_student > 5)
        {
            cout << "Result : Pass" << endl;
        }
        else
        {
            cout << "Result : Fail" << endl;
        }
    }
};

int main()
{
    Student *student_pointer;
    Student objStudent;
    SportsMarks objSportsMarks;
    Result objResult;
    TestMarks objTestMarks;

    student_pointer = &objTestMarks;
    student_pointer->display1();

    // student_pointer = &objSportsMarks;
    TestMarks *testMarks_pointer;
    testMarks_pointer = &objTestMarks;
    testMarks_pointer->display();

    SportsMarks *sportsMarks_pointer;
    sportsMarks_pointer = &objSportsMarks;
    sportsMarks_pointer->display();

    Result *result_pointer;
    result_pointer = &objResult;
    result_pointer->display();
    return 0;
}