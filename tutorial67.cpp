// Class Templates with Default Parameters
#include<iostream>
using namespace std;

template<class T1=int, class T2=float, class T3=char>
class Anubhav{
    public:
        T1 a;
        T2 b;
        T3 c;
        Anubhav(T1 x, T2 y, T3 z){
            a=x;
            b=y;
            c=z;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};
int main(){
    Anubhav <> obj1(1, 2.4, 'a');
    obj1.display();
    cout<<endl;

    Anubhav <float, char, char> obj2(1.23, 'c', 'a');
    obj2.display();
    
    return 0;
}