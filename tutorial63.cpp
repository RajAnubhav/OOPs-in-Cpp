#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string st1, st2;
    ofstream out;
    out.open("sample63.txt");
    out<<"This is my name";
    out<<", Anubhav Raj";
    out<<endl<<"khekhekhekhe"<<endl;
    out.close();

    // reading of the file
    ifstream in;
    in.open("sample63.txt");
    // getline(in, st1);
    // in>>st1;
    // cout<<st1;

    // using while loop
    while(in.eof()==0){
        getline(in, st2);
        cout<<st2<<endl;
    }
    in.close();

    return 0;
}