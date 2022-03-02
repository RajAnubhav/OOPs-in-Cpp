// to calculate the volume of the a given solid
// 1. cube, 2. cuboid, 3. cylinder
// this is the typical example of function overloading

#include<iostream>
/*
The using namespace statement just means that in the scope it is present, 
make all the things under the std namespace available without having to 
prefix std:: before each of them
*/

using namespace std;
#define PI 3.1412  // this is to define the global constant PI

// making a function named volume 
// to calculate the volume of the cylinder
// and return the volume in the floating-point
float volume(int a, int b){
    // this is for the volume of cylinder
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
    cout<<"Enter the radius of the cylinder: "<<endl;// r->3
    // getting the input from the user
    cin>>r;
    cout<<"Enter the height of the cylinder: "<<endl;
    // getting the input from the user
    cin>>h; // h->1

    // invoking the functions
    cout<<"The volume of the cylinder is  "<<volume(r, h)<<endl;
    
    /*
    if we are calling for the cuboid then we need to call the function as 
    cout<<"The volume of the cuboid is "<<volume(a, b, c)<<endl;
    
    So, this will select the function named: float volume(int a, int b, int c){}
    */
    /*
    NOTE: If there are two functions with same number of arguments then it will raise an ambiguity error:
    /* 
    # this is the raised error :
    
            functionOverloading.cpp: In function 'int sum(int, int)':
            functionOverloading.cpp:17:5: error: redefinition of 'int sum(int, int)'
            int sum(int a, int b){
                ^~~
            functionOverloading.cpp:6:5: note: 'int sum(int, int)' previously defined here
            int sum(int a, int b){
                 ^~~
    */
    
    
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
