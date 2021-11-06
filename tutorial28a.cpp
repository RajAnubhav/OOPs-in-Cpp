#include<iostream>
using namespace std;

// Front Declaration
class Complex;

class Calculator{
    public:
    int add(int a, int b){
        return(a+b);
    }
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);

};

class Complex{
    int a, b;
    friend class Calculator;
    // friend int Calculator::sumRealComplex(complex , complex);

    public:
    void setData(int n1, int n2){
        a=n1;
        b=n2;
    }
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int Calculator::sumRealComplex(Complex o1, Complex o2){
    return (o1.a+o2.a);
}
int Calculator::sumCompComplex(Complex o1, Complex o2){
    return(o1.b+o2.b);
}

int main(){
    Complex o1, o2;
    o1.setData(1, 4);
    o2.setData(5, 7);

    Calculator calc;
    int real = calc.sumRealComplex(o1, o2);
    int comp = calc.sumCompComplex(o1, o2);

    cout<<"The sum of the complex is "<<real<<" + "<<comp<<"i"<<endl;
    return 0;
}