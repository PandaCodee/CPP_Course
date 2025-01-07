// ********************* Pointers *********************
#include<iostream>
using namespace std;

int main(){
    //What is Pointers ----> It is a Data Type which hold the address of other Data Types
    int a;
    int* b = &a;
    // Ek int pointer banaya'int*' se aur usko naam diya 'b' aur kaha ki tum a ka address hold kro "&" se. 
    cout<<"The Address of a is: "<<b<<endl;
    cout<<"The Address of a is: "<<&a<<endl; 
    // & ---> (Address of) Operator

    // * ---> (Value at Operator) Dereference Operator
    cout<<"The value at address b is : "<<*b<<endl;
    cout<<"The value at address b is : "<<*&a<<endl;

    //Pointer to Pointer (Ek esa pointer jo pointer ka address hold krta ho)
    int** c=&b;
    cout<<"The address of b is :"<<&b<<endl;
    cout<<"The address of b is :"<<c<<endl;
    cout<<"The value at address c is :"<<**&b<<endl;
    cout<<"The vaule_at(value_at(c)) is :"<<**c<<endl;

    return 0;
}