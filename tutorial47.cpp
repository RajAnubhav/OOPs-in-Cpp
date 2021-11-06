// Pointer Code

#include<iostream>
using namespace std;

int main(){
    
    // Basic Example
    int a=4;
    int *ptr=&a;

    cout<<"The value of a is "<<*(ptr)<<endl;// Dereferancing of pointer ---> *(ptr) ---> gives the value

    // new operator/keyword
    int *p= new int (40);// this is dynamically initialized using the "new" keyword
    cout<<"The value at address p is "<<*(p)<<endl;

    int *arr=new int[3];// this is a dynamic array
    arr[0]=10;
    *(arr+1)=20;
    arr[2]=30;
    cout<<"The value at arr[0] is "<<arr[0]<<endl;
    cout<<"The value at arr[1] is "<<arr[1]<<endl;
    cout<<"The value at arr[2] is "<<arr[2]<<endl;

    //delete operator/keyword  ---> frees the memory
    delete arr;
    cout<<"The value at arr[0] is "<<arr[0]<<endl;
    cout<<"The value at arr[1] is "<<arr[1]<<endl;
    cout<<"The value at arr[2] is "<<arr[2]<<endl;

    return 0;
}