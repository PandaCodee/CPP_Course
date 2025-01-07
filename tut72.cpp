// ********************* Virtual Functions **********************
#include<iostream>
using namespace std;
#include<cstring>

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display(void){cout<<"Hello!!"<<endl;}
};

class CWHVideo : public CWH{
    int videoLength;
    public:
        CWHVideo(string s, float r, float vL): CWH(s, r){
            videoLength = vL;
        }
        void display(){
            cout<<"Thsi is an amazing video with title "<<title<<endl;
            cout<<"Ratings :  "<<rating<<" Out of 5 star"<<endl;
            cout<<"Length of this video is "<<videoLength<<" minutes"<<endl;
        }
};

class CWHText : public CWH{
    int words;
    public:
        CWHText(string s, float r, int wc): CWH(s, r){
            words = wc;
        }
        void display(){
            cout<<"Thsi is an amazing text tutorial with title "<<title<<endl;
            cout<<"Rating of this text tutorial :  "<<rating<<" Out of 5 star"<<endl;
            cout<<"Number of words in this text tutorial is : "<<words<<" words"<<endl;
        }
};

int main(){
    // char * title = new char[30];
    string title;
    float rating, vlen;
    int words;

    //for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    //for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);
    // djText.display();

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

//Rules for virtual functions
/*
1. They cannot be Static
2. They are accessed by objetc pointers
3. Virtual functions can be a friend of another class
4. A virtual function in base class might not be used
5. A virtual function is defined in an base class there is no necessity of redefining it in the derived class
*/