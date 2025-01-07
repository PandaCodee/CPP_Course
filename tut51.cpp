// ********************* Copy Constructor **********************
#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        //Number(){}//Make a default constructor
        Number(){
            a = 0;
        }
        Number(int num){
            a = num;
        }
        //Copy Constructor
        Number(Number &obj){
            cout<<"Copy Constructor Called!!"<<endl;
            a = obj.a;
        }

        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }
};
//Copy Constructor ek ea constructor he jo dusre object ki copy bna deta he!!
int main(){
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();
    //z1 should exactly resemble z or x or y
    //For this we make a copy constructor
    Number z1(x);//Copy constructor invoked
    z1.display();
    //Now After comment out your copy compiler
    //Output remains same except("Copy Constructor Called!!")
    //Beacause aapka jo compiler he woh default copy constructor har ek calss ko allocate krta he 
    //When no copy constructor is found compiler supplies its own copy constructor
    z2 = z;//Copy constructor not called
    z2.display();//Default copy constructor calle dfrom compiler
    Number z3 = z;//Copy constructor invoked
    z3.display();
    return 0;
}