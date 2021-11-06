#include<iostream>
using namespace std;

class SampleClass{
    int a;
    public:
    void setData(int a){
        this->a=a;
    }
    void printData(){
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    SampleClass *sc = new SampleClass;
    sc->setData(5);
    sc->printData();

    return 0;
}