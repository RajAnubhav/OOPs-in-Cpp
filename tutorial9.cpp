// if-else and control structures 
#include<iostream>
using namespace std;
int main(){
    // cout<<"This is tutorial 9"<<endl;
    int age;
    cout<<"Tell me your age: "<<endl;
    cin>>age;
    if(age<18 && age>0){
        cout<<"You cannot come to the party"<<endl;
    }else if(age==18){
        cout<<"You are a kid and you will get a kid pass"<<endl;
    }else if(age>18){
        cout<<"You can come to the party"<<endl;
    }else if(age<0){
        cout<<"You are not yet born"<<endl;
    }
    return 0;
}