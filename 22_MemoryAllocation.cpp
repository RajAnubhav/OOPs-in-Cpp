// this is how we can use the arrays inside the classes
// In the class how we can initialize the arrays and use them to get the desired result

// C++ Objects Memory Allocation
#include <iostream>
using namespace std;

class Shop
{
    // they are private by-default
    // initialization of the arrays
    int itemId[100]; // this is static memory allocation
    int itemPrice[100];
    int counter; // tracks the value in the item

public:
    // declaring the functions
    void initCounter(void)
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};

void Shop::setPrice(void)
{
    // this can be done by using the loops
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
    // here we are incrementing the value of the counter
}

void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}

/*
this is the output of the program

Enter Id of your item no 1
101
Enter Price of your item
100
Enter Id of your item no 2
102
Enter Price of your item
200
Enter Id of your item no 3
103
Enter Price of your item
300
The Price of item with Id 101 is 100
The Price of item with Id 102 is 200
The Price of item with Id 103 is 300
*/
