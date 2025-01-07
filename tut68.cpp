// ********************* 'this' Pointer **********************
#include<iostream>
using namespace std;

class A{
    int a;
    public: 
        // void setData(int a){
        //     // a = a; //--> Error: throw garbage value of a
        //     this -> a = a;
        // }
        A & setData(int a){
            this -> a = a;
            return *this;
        }// This will get an object , jispe me getData() function chala skta hu using dot operator

        void getData(void){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    // 'this' is a keyword which is a pointer which points to the object which invokes the member function
    // kabhibhi hum arrow operator use krte he toh woh sirf pointers pr
    A a;
    a.setData(4).getData();
    a.getData();
    return 0;
}