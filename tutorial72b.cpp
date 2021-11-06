#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}