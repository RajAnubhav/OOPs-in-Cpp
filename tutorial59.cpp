#include<iostream>
#include<fstream>

/*
    fstreambase
    ifstream ---> derived form fstreambase
    ofstream ---> derived from fstreambase

    Inorder to work with files in C++, you will have to open it. Particularily, there are 2 ways to open a file:
    1. fsrtreambase
    2. ifstream
    3. ostream
*/
using namespace std;
#include<string.h>
int main(){
    // opening files using constructor
    string st = "Harry bhai";
    // ofstream out("sample59.txt");// write operation
    // out<<st;

    string st2;
    ifstream in("sample59.txt");// read operation
    // in>>st2; // this is for simple word
    getline(in, st2);// this is for a line
    cout<<st2;
    return 0;
}