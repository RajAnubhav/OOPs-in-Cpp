// Function Objects or Functor
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    // Function Objects : Function wrapped in a class so that it is available like an object
    int arr[] = {1, 3, 4, 77, 54, 12, 7};
    sort(arr, arr+7);
    sort(arr, arr+7, greater<int>());// greater<int>() : this is a function object or functor
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";        
    }
    

    return 0;
}