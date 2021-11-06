#include<iostream>
#include<list>// this is a bi-directional list
using namespace std;
// List is used to insert / delete fastly

void display(list <int> &lst){
    list<int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1;// list of zero length
    // list<int> list2(7);// empty list of size 7 -> element can be inserted
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    list1.push_back(9);
    display(list1);

    // list1.pop_back();
    // list1.pop_front();

    // // Sorting the list
    // list1.sort();
    // display(list1);

    // to remove an element from middle
    list1.remove(9);// both 9 are removed 

    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<<*iter<<" ";
    // iter++;

    display(list1);

    list<int> list2(3);
    list<int> :: iterator itr;
    itr = list2.begin();
    *itr = 45;
    itr++;
    *itr = 6;
    itr++;
    *itr = 9;
    itr++;

    display(list2);

    // merging of lists
    cout<<"List 1 after merging "<<endl;
    list1.merge(list2);
    list1.sort();
    display(list1);

    // reverse the list
    list1.reverse();
    display(list1);

    return 0;
}