// ************************** Build in Data Types **************************
#include<iostream>
using namespace std;
int c=45;
// this c is global variable
int main(){
    int a, b, c;
    cout<<"Enter the value of a :"<<endl;
    cin>>a;
    cout<<"Enter the value of b :"<<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum is :"<<c<<endl;
    cout<<"The global c is :"<<::c;
    // '::' This is scope resolution operato. This helps to print global value.





    return 0;
}