// Again study on Array of Objects/Pointers
#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "The Id of this item is " << id << endl;
        cout << "The price of this item is " << price << endl;
    }
};

int main()
{
    int size = 3, p, q;
    // int *ptr = &size;
    // int *ptr = new int [34];
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout<<"The id and price of the item "<<i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<"Item Number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    return 0;
}