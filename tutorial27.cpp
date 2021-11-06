// friend function
#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Below line means that non-member sumComplex function is allowed to do with the private member
    friend complex sumComplex(complex o1, complex o2); // this is the friend function 
    
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 4);
    c2.setNumber(5, 8);
    c1.printNumber();
    c2.printNumber();
    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/* Properties of friend functions
1. Not in the scope of the class
2. Since it is not in the function so  it cannot be directly called 
3. can be invoked without the help of the objects
4. Ususally contains the items of the objects
5. Can be declared inside the public or private of the function
7. it cannot access the members directly by names and need object names to access
*/