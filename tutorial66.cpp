// Templates with multiple parameters
#include<iostream>
using namespace std;
/*
template<classT1, classT2>
class nameOfClass{
    //body
};
*/

template <class T1, class T2> // these parameters can be classes
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
    myClass <int, char> obj(1, 'c');
    obj.display();

    return 0;
}