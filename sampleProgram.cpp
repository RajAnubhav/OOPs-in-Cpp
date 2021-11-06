#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;
int main(){    
    int n;
    cout << "Enter no of lines you want as an output: " << endl;
    cin >> n;

    string st1;
    ifstream in("keyword.txt");
    for (int i = 0; i < n;i++){ 
            if (st1 == " " || st1 !="0" || st1 !="1" || st1 != "2" || st1 !="3" ||st1 !="4" ||st1 !="5" ||st1 !="6" ||st1 !="7" ||st1 !="8" || st1 !="9"){
                getline(in, st1);
                in >> st1;
                cout << st1 << ", "<<"\n";
            }
        }
    in.close();
    return 0;
}