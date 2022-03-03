// Class can create a subclass that will inherit parent's properties and methods, whereas Structure does not support the inheritance.

// Choosing Between Class and Struct 
// A class has all members private by default. A struct is a class where members are public by default.

// Classes allow to perform cleanup (garbage collector) before object is deallocated because garbage collector works on heap memory. 
// Objects are usually deallocated when instance is no longer referenced by other code. 
// Structures can not be garbage collector so no efficient memory management.

// Sizeof empty class is 1 Byte where as Sizeof empty structure is 0 Bytes

// Structure vs class in 
// Classes are still fit for larger or complex objects and Structs are good for small, isolated model objects. 
// Boxing and unboxing operations are used to convert between a struct type and object. 
// Too much boxing and unboxing can have a negative impact on the heap, the garbage collector, 
// and ultimately the performance of the application.

// In general, it's perfectly possible to create structs that look a lot like classes and classes that look a lot like structs.

// Which style you use depends on circumstances and taste. I usually prefer to use struct for classes that have all data public. 
// I think of such classes as "not quite proper types, just data structures."....... Bjarne Stroustrup

// OOPs - Classes and Objects
// Nesting of member functions
#include <iostream>
#include <string.h>
using namespace std;

class binary
{
    // the string is a private data
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
};

// this is the way we can declare the functions in Classes 
void binary ::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}


// this is the function which will check the binary
void binary ::chk_bin(void)
{
    // s.at is used to specify the value at ith index in the string 
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_complement(void)
{
    // this is the nesting of the functions
    // this will always run if the user doesn't call the chk_bin()

    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        // this is just comparing the 1's and 0's
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

// this is for displaying the values
void binary ::display(void)
{
    cout << "Displaying your Binary number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    b.display();
    b.ones_complement();
    b.display();
    return 0;
}

/*
the output of the program is : 

Enter a binary number 
101001
Displaying your Binary number 
101001
Displaying your Binary number 
010110
*/
