// ********************* Virtual Functions **********************
#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base = 1;
        virtual void display(){
            cout<<"1. Displaying Base Calss variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived = 2;
        void display(){
            cout<<"2. Displaying Base Calss variable var_base "<<var_base<<endl;
            cout<<"2. Displaying Base Calss variable var_derived "<<var_derived<<endl;
        }
};
int main(){
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    
    // ab muze base class ke poniter ko derived class pe point krke derived class walahi hi display function run krwana he toh me virtual function ki madat lunga
    base_class_pointer = &obj_derived;
    base_class_pointer -> display();
    // virtual function banane ke liye base class ke function ke aage 'virtual' keyword ka istemal kiya
    return 0;
}
//Polymorphism hoti ek property jisse objetcs jo alg alg class ko belong kr rhe he woh ek tarah ke message ko respond krte he