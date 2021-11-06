// Wap to swap private data of the classes
#include<iostream>
using namespace std;
class Y;
class X{
    int a1, b1;
    public:
    void setData(int n1, int n2){
        n1=a1;
        n2=b1;
    }
    friend
};
class Y{
    int a2, b2;
    public:
    void setData(int n1, int n2){
        n1=a2;
        n2=b2;
    }
};
int main(){
    
    return 0;
}