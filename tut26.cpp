// ********************* Function Prototypes in C++ *********************
#include<iostream>
using namespace std;

//Function Prototype
//type function-name (arguments);
int sum( int a, int b);//--> Yeh acceptable he. //Ye assurity deta he ki haa sum naam ka function aage he, garinty nhi deta. 
// int sum(int a, b); //--> Yeh acceptable nhi he.
// int sum(int, int); //--> Yeh acceptable he.
//void g();// -->Yeh acceptable he
void g(void);// -->Yeh bhi acceptable he
int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    //num1 and num2 are actual parameters
    cout<<"The sum is: "<<sum(num1, num2)<<endl;
    g();
    return 0;
}
//Formal Parameters a and b will be taking values from actual parameters num1 and num2.
//Formal and Actual Parameters ke naam same bhi ho skte he.
int sum(int a, int b){
    int c= a+b;
    return c;
}

//Kya function ko value return krne ke jarurat he?
//Ans --> Nhi
void g(){
    cout<<"Hello, Good Morning";
}