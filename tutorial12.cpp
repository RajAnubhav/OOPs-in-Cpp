// Pointers in C++
#include<iostream>
using namespace std;
int main(){
    int a=3;
    int *b=&a;
    // & --> address of operator
    // * --> Dereferance of operator
    cout<<"The address of a is: "<<b<<endl;
    cout<<"The address of a is: "<<&a<<endl;

    // this is the value of the a
    cout<<"The value of a is: "<<*b<<endl;

    // pointer to pointer
    int **c=&b;
    cout<<"The address of b is: "<<c<<endl;
    cout<<"The value at address c is: "<<int(*c)<<endl;
    
    return 0;
}