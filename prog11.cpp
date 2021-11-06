// butterfly pattern
/*
    n=4 
    -> Upper Part
    -> rows : 1 -> n
    -> spaces : 2*n - 2*row_no

    -> Lower Part
    -> rows : n -> 1

    *      *
    **    **
    ***  ***
    ********
    ********
    ***  ***
    **    **
    *      *
    
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    // Upper Part
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space=2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // Lower Part
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space=2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}