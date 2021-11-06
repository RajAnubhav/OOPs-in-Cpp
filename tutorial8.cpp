// Manipulators in C++
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=34;
    cout<<"The value of a without setw  is: "<<a<<endl;
    a=45;
    cout<<"The value of a with setw is: "<<setw(6)<<a<<endl;
    return 0;
}