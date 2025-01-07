// ********************* Call by Reference *********************
#include<iostream>
using namespace std;

int & swapReferenceVar(int &a, int &b){//temp is nothing but a third variable use to swaping. 
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main(){
    int x=4, y=5;
    cout<<"The value of x is "<<x<<endl<<"The value of y is "<<y<<endl;
    swapReferenceVar(x,y) = 766;//Thsi will swap a and b using return by reference
    cout<<"After Swaping"<<endl;
    cout<<"The value of x is "<<x<<endl<<"The value of y is "<<y<<endl;
    return 0;
}