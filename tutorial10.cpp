// Loops
#include<iostream>
using namespace std;
int main(){
    // for(int i=0;i<=40;i++){
    //     cout<<i<<endl;
    // }
    // multiplication table using do-while loop
    int i,n=1;
    cout<<"Enter the value of the number: "<<endl;
    cin>>i;
    do{
        cout<<i<<" x "<<n<<" = "<<i*n<<endl;
        n++;
    }while (n<11);
    
    return 0;
}