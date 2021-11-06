#include<iostream>
using namespace std;

template<class T1, class T2> // this is the template with the multiple parameters 
// these parameters define the data-types of the class
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }
        void display(){
            cout<<this->data1<<endl<<this->data2<<endl;
        }
};

int main(){
    myClass <int, float>obj(1, 0.004);
    obj.display();

    return 0;
}

// do research on how can we pass classes using templates