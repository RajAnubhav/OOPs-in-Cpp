// recurssions
#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    // Factorial of a number: 
    // 6! = 6*5*4*3*2*1 = 720
    int a;
    cout<<"Enter a number "<<endl;
    cin>>a;
    cout<<"Factorial of "<<a<<"! is "<<factorial(a);
    cout<<endl<<"Fibonacci Sequence of "<<a<<" is "<<fib(a)<<endl;
    return 0;
}