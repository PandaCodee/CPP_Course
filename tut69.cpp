// ********************* Polymorphism(Theory) **********************
#include<iostream>
using namespace std;

int main(){
    //Polymorphism  //Poly -> Many, Morphism -> Forms
    // - one name and multilple forms
    // - eg. Function overloading, operator overloading
    // - eg. Virtual; Functions

    //Polymorphism in C++ can be of two types:
    //1. Compile Time Polymorphism
    //   Cimpile Time Polymorphism in C++ is acheived using:
    //   1.1 - Function Overloading
    //   1.2 - Operator Overloading
    //
    //2. Run Time Polymorphism
    //   Run TimepOlymorphism in C++ is acheived using:
    //   2.1 - Virtual Functions 
    return 0;
}

//Polymorphism
//Two types -> 1.Compile Time Polymorphism    &    2.Rum Time Polymorphism 
//1. Compile Time Polymorphism -> Yeh hum do tarikese achieve krte he -> Function Overloading, Operator Overloading
//                             -> Object function call se bound ho jata he compile time me 
//                             -> matlab compile time me ye decision le liya jata heki konsa wala function call hone wala he
//                             -> ise early binding bhi bolte he, ise static binding bhi bolte he

//2. Run Time Polymorphism -> Virtual Function dwara achieve kiya jata he
//                         -> Konsa Function call hoga is bat ki decision ko bohut jyada pospond kr deta he/ defer kr deta he
//                         -> Yeh linking of Function call ko defer kr deta he run time me 