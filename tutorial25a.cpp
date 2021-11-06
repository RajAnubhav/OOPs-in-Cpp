#include <iostream>
using namespace std;

class Subject
{
private:
    string sub_id;
    float sub_marks;

public:
    string sub_name;
    string stud_name;
    void setData(string id, float marks);
    void getData(void);
};

void Subject::setData(string id, float marks)
{
    sub_id = id;
    sub_marks = marks;
}

void Subject::getData(void)
{
    cout<<"Name of the student : "<<stud_name<<endl;
    cout<<"Subject Name : "<<sub_name<<endl;
    cout<<"Subject Id : "<<sub_id<<endl;
    cout<<"Subject Marks : "<<sub_marks<<endl;
}
int main()
{
    Subject Mathematics;
    Mathematics.sub_name = "Mathematics";
    Mathematics.stud_name = "Anand Kumar";
    Mathematics.setData("3RMAT3A", 93.8);
    Mathematics.getData();

    return 0; 
}
