// inline functions
#include<iostream>
using namespace std;

inline int product(int a, int b){
    int c=a*b;
    return c;
}

int main(){
    int a, b;
    cout<<"Enter the value of a and b "<<endl;
    cin>>a>>b;
    cout<<"The product of a and b "<<product(a,b);

    return 0;
}
// dont use inline function while recursions
