// ********************* File I/O in C++ : open() and end() functions **********************
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("tut77sample.txt");
    out<<"This is me \nThsi is also me";
    out.close();

    ifstream in;
    string st1, st2;
    in.open("tut77sample.txt");
    // in>>st1>>st2;
    // cout<<st1<<st2;
    while(in.eof() == 0){//eof --> end of file
        getline(in, st1);
        cout<<st1<<endl;
    }
    in.close();
    return 0;
}