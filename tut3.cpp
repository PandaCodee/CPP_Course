
// ********************* Arithmetic, Assignment, Comparision,Logical *********************
// There are two types of header files
// 1. System Header Files: It comes with compiler 
#include<iostream>
using namespace std;
// 2. User Defined Header File: It is written by the programmer
// #include "this.h" //--> This will produce an erroe if this.h is no present in current directory

int main(){
    int a=4 , b=5;
    cout<<endl<<endl;
    cout<<"Operation in C++"<<endl; 
    cout<<"Followings are arithmetic operations in C++"<<endl;
    //Arithmetic Operation
    cout<<"The value of a + b is "<<a + b<<endl;
    cout<<"The value of a - b is "<<a - b<<endl;
    cout<<"The value of a * b is "<<a * b<<endl;                    
    cout<<"The value of a / b is "<<a / b<<endl;
    //int ka output int hi rahega//normally 4/5 kare toh 0.8 milega
    //agar koi doubt ho toh b ki value 3 dal ke code fir run kre aur frk dekhe
    cout<<"The value of a % b is "<<a % b<<endl;
    cout<<"The value of a++  is "<<a++ <<endl;
    //pehele woh a ko print krega fir increment krega
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of b++ is "<<b++<<endl;
    cout<<"The value of b-- "<<b--<<endl;
    cout<<"The value of ++a "<<++a<<endl;
    cout<<"The value of --a "<<--a<<endl;
    cout<<"The value of ++b "<<++b<<endl;
    cout<<"The value of --b "<<--b<<endl;
    cout<<endl;

    // Assingment Operators --> use to assign values to operators
    // int a=3, b=9;
    // char d='d';

    // Comparison Operators
    cout<<"Followings are the comparision operations in C++"<<endl;
    //agr true rha toh 1 print krega aur false rha toh 0
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    // '!=' sign of not equal to
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<endl;

    // Logical Operators
    cout<<"Followings are the logical operations in C++"<<endl;
    cout<<"The value of logical 'and' operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of logical 'or' operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of logical 'or' operator (!(a==b)) is: "<<(!(a==b))<<endl<<endl;

    return 0;
}