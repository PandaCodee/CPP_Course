// ********************* Manipulators In C++ *********************
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // isme hum 'setw' manipulator dekhenge 
    // uske liye hum '<iomanip>' system header file include karenge
    int a=1, b=12, c=123, d=1234, e=12345;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;
    cout<<"The value of d without setw is: "<<d<<endl;
    cout<<"The value of e without setw is: "<<e<<endl;
    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;
    cout<<"The value of d is: "<<setw(4)<<d<<endl;
    cout<<"The value of e is: "<<setw(4)<<e<<endl;
    // 'setw(4)' ko 'setw(5)' likhake fir try kro aur frk dekho.
    return 0;
}