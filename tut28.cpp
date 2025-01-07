// ********************* Call by Reference Variables  *********************
#include<iostream>
using namespace std;

void swapReferenceVar(int &a, int &b){//temp is nothing but a third variable use to swaping. 
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x=4, y=5;
    cout<<"The value of x is "<<x<<endl<<"The value of y is "<<y<<endl;
    swapReferenceVar(x,y);//Thsi will swap a and b using reference variable
    cout<<"After Swaping"<<endl;
    cout<<"The value of x is "<<x<<endl<<"The value of y is "<<y<<endl;
    return 0;
}