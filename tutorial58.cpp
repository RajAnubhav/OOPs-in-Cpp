/*
    Rules for Virtual Functions
    1. They cannot be static
    2. They are accessed using pointers
    3. Virtual Functions can be a friend of the another class
    4. A virtual function may or maynot be invoked in the class
    5. If a virtual function is defined in the base classs, then, no need to re-define it in the derivedd class
*/
// Abstract Base Class
// Pure Base Class
// virtual void display()=0; // do-nothing function or pure-virtual function
// Exapmle of Virtual Functions
#include<iostream>
#include<cstring>
using namespace std;

class CWH{ // this is an abstract base class ---> used to make the objects
    protected:
    string title;
    float rating;
    public:
    CWH(string s, float r){
        title = s;
        rating = r;
    }
    virtual void display()=0;// pure-virtual function
};
class CWHVideo:public CWH{
    float videoLength;
    public:
    CWHVideo(string s, float r, float vl):CWH(s, r){
        videoLength = vl;
    }
    void display(){
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Ratings "<<rating<<" out of 5 starts"<<endl;
        cout<<"Length of this video is "<<videoLength<<" minutes"<<endl;
    }
};

class CWHText:public CWH{
    int words;
    public:
    CWHText(string s, float r, int vc):CWH(s, r){
        words = vc;
    }
    void display(){
        cout<<"This is an amazing text tutorial with title "<<title<<endl;
        cout<<"Ratings "<<rating<<" out of 5 starts"<<endl;
        cout<<"Length of this text tutorial is "<<words<<" words"<<endl;
    }
};

int main(){
    string title ;
    float rating, vlen;
    int words;

    // for videos
    title = "This is C++ Tutorial";
    vlen = 4.56;
    rating = 4.89;

    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    // for words
    title = "This is a tutorial for C++";
    words = 500;
    rating = 4.29;
    CWHText djText(title, rating, words);
    // djText.display();

    CWH *tut[2];
    tut[0] = &djVideo;
    tut[1] = &djText;

    tut[0]->display();
    tut[1]->display();
    return 0;
}