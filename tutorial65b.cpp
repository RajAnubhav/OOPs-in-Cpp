// Cross-Product
#include<iostream>
using namespace std;

class vector{
    int size;
    public:
    int *arr;
    vector(int m){
        size=m;
        arr=new int[size];
    }
    int dotProduct(vector &v){// here vector is working as a data-type, so, we can also say this as user-defined datatype
        int d=0;
        for(int i=0;i<size;i++){
            d+=this->arr[i]*v.arr[i];
        }
    }
};

int main(){
    vector v1(4);
    for(int i=0;i<4;i++){
        cout<<"Enter the value of first vector v"<<i+1<<" : "<<endl;
        cin>>v1.arr[i];
    }

    vector v2(4);
    for(int i=0;i<4;i++){
        cout<<"Enter the value of second vector v"<<i+1<<" : "<<endl;
        cin>>v2.arr[i];
    }

    float a=v1.dotProduct(v2);
    cout<<"The dot Product of these two vectors is : "<<a<<endl;

    return 0;
}