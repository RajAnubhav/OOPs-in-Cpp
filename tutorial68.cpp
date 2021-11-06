// Function Templates
#include<iostream>
using namespace std;

template<class T1, class T2>

float funcAvg(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

template<class T>
void swapp(T &a, T &b){
    T temp=a;
    a=b;
    b=temp;
}
// float funcAvg(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }


int main(){
    float a;
    a=funcAvg(5, 2.01);
    cout<<"The avg of these numbers is "<<a<<endl;

    float x=5.01, y=7.22;
    swapp(x, y);
    cout<<"The value of x and y are "<<endl<<x<<endl<<y<<endl;

    return 0;
}