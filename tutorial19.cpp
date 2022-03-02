// to calculate the volume of the cylinder
// this is the typical example of function overloading

#include<iostream>
using namespace std;
#define PI 3.1412  // this is to define the global constant PI

// making a function named volume 
// to calculate the volume of the cylinder
// and return the volume in the floating-point
float volume(int a, int b){
    return PI*a*a*b;
}

// this is to get the volume of the cube
float volume(int a){
    return a*a*a;
}

// this is to get the volume of the cuboid
float volume(int a, int b, int c){
    return a*b*c;
}

int main(){
    // declaring the variables r -> radius and h-> height 
    int r, h;
    cout<<"Enter the radius of the cylinder: "<<endl;
    // getting the input from the user
    cin>>r;
    cout<<"Enter the height of the cylinder: "<<endl;
    // getting the input from the user
    cin>>h;

    // invoking the functions
    cout<<"The volume of the cylinder is  "<<volume(r, h)<<endl;

    return 0;
}

// <<<<-------------  This is the sample output  --------------------->>>>>>>>
/*
Enter the radius of the cylinder: 
4
Enter the height of the cylinder: 
13
The volume of the cylinder is  653.37
*/
