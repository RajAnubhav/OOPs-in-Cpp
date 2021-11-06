// Maps in STL
// go to cppreferance.com

#include<iostream>
#include<map>
#include<string>
using namespace std;

// Map is an associative array

int main(){
    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Rohan"] = 67;
    marksMap["Jack"] = 2;

    marksMap.insert({"Kosume", 169});
    
    map<string, int> :: iterator iter;
    for(iter=marksMap.begin();iter!=marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<"The max size of the array is "<<marksMap.max_size()<<endl;
    // cout<<"The min size of the array is "<<marksMap.lower_bound("0", 0)<<endl;

    return 0;
}