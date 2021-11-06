//to calculate the volume of the cylinder
#include<iostream>
#define PI 3.1416
using namespace std;
float volume(int a, int b){
    return PI*a*a*b;
}
float volume(int a){
    return a*a*a;
}
float volume(int a, int b, int c){
    return a*b*c;
}
int main(){
    int r,h;
    cout<<"Enter the radius of the cylinder "<<endl;
    cin>>r;
    cout<<"Enter the height of the cylinder "<<endl;
    cin>>h;
    cout<<"The volume of the cylinder is "<<volume(r,h)<<endl;
    return 0;
}