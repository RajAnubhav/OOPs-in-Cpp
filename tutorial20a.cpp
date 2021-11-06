#include <iostream>
#include <string.h>
using namespace std;

class BinaryNumber
{
    string s;

public:
    void read();
    void check_binary();
    void ones_complement();
    void display();
};

void BinaryNumber::read()
{
    cout << "Enter a binary number : " << endl;
    cin >> s;
}

void BinaryNumber::check_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid input entered! " << endl;
            exit(0);
        }
    }
}

void BinaryNumber::ones_complement()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}

void BinaryNumber::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    BinaryNumber bin;
    bin.read();
    bin.check_binary();
    bin.ones_complement();
    bin.display();

    return 0;
}