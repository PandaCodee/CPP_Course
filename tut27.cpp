// ********************* Call by Value & Call by Reference *********************
#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}
//This will not swap a and b
/*
void swap(int a, int b){//temp is nothing but a third variable use to swaping. 
    int temp = a;
    a = b;
    b = temp;
}
*/
void swapPointer(int* a, int* b){//temp is nothing but a third variable use to swaping. 
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x=4, y=5;
    cout<<"The sum of 4 and 5 is: "<<sum(x,y)<<endl;
    cout<<"The value of x is "<<x<<endl<<"The value of y is "<<y<<endl;
    // swap(x,y); //This will not swap a and b

    //Call by Refrence Using Pointer
    swapPointer(&x,&y);//Thsi will swap a and b using pointer reference
    cout<<"After Swaping"<<endl;
    cout<<"The value of x is "<<x<<endl<<"The value of y is "<<y<<endl;
    return 0;
}