// ********************* File I/O in C++ : Working with Files **********************
// ********************* File I/O in C++ : Reading and Writing Files **********************
//C++ me agr humko files ke sath khelna he toh hum kuchh class ka use krte he jo hme C++ pradan krta he
#include<iostream>
#include<fstream>//Woh classes hume yaha milegi

//The useful classes for working with files in C++ are :
/*
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

//In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file
//1. using the constructor
//2. Using the member function open() of the class

using namespace std;

int main(){
    string st1 = "Harry Bhai";
    string st2;
    //Opening files using construction and Wirting it
    ofstream out("tut75sampleA.txt");//Write Operation
    out<<st1;//Jesehi function run karoge, tut75sampleA file me meri string print ho jayegi

    //Opening file using constructor and Reading it
    ifstream in("tut75sampleB.txt");//Read Operation
    // in>>st2; --> Yeh black spaces read nhi krega
    getline(in, st2);
    getline(in, st2);
    cout<<st2;
    return 0;
}
