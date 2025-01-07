// ********************* File I/O in C++ : Reading in the Same Program & Closing Files **********************
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //connection a  file with hout stream
    ofstream hout("tut76sample.txt");

    //Creating a name string and filling it with the string entered by the user
    cout<<"Enetr your name : ";
    string name;
    cin>>name;

    //Writing a string to the file
    hout<<"My name is " + name;
    hout.close();//breaks the connection//file and program ka link tod diya

    ifstream hin("tut76sample.txt");
    string content;
    // hin>>content;
    getline(hin, content);
    cout<<"The content of this file is: "<<content;
    hin.close();

    return 0;
}