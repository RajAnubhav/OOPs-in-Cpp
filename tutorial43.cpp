// Virtual Base Class
#include<iostream>
using namespace std;
class A{
    public:
    int a;
};
class B:virtual public A{
    public:
    int b;
};
class C:virtual public A{
    public:
    int c;
};
class D:protected B, public C{
    public:
    int d;
};
int main(){
    D d;
    // d.b;
}