// Exapmle of Virtual Functions
#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s, float r){
        title = s;
        rating = r;
    }
    virtual void display(){}
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