// Call by value / call by referance
#include<iostream>
void swap(int *, int *); // this is call by referance
using namespace std;
int main(){
    int a=4,b=5;
    cout<<"Before swapping"<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;

    swap(a,b);
    cout<<"After swapping"<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    return 0;
}
void swap(int a, int b){
    int temp = a;
    a=b;
    b=temp;
}