#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st1;

    ifstream in("sample62.txt");
    while (!EOF)
    {
        getline(in, st1);
        in>>st1;
        cout<<st1<<endl;
    }
        in.close();
    
    
    
    return 0;
}