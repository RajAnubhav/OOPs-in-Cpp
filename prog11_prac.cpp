// butterfy pattern
/*

    n=4

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

    // For Upper half
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        int space = 2*n-2*i;
        for(int j=1; j<=space;j++){
            cout<<" ";
        }
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // For Lower half
    for(int i=n;i>0;i--){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        int space = 2*n-2*i;
        for(int j=1; j<=space;j++){
            cout<<" ";
        }
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}