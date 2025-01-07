// ********************* Pointers to Derived Class **********************
#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Displaying Base Calss variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying Base Calss variable var_base "<<var_base<<endl;
            cout<<"Displaying Base Calss variable var_derived "<<var_derived<<endl;
        }
};

int main(){
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    
    base_class_pointer = &obj_derived;//Pointing to Base Class Poniter to Derived Calss
    //agr base calss ke pointer ko derived class se bhi point kra diya, toh aap agr us pointer ki sahayta se display function run karoge toh base class ka run hoga
    base_class_pointer -> var_base = 34;
    // base_class_pointer -> var_derived = 34; -> Throws an error, because the pointer is of base class
    base_class_pointer -> display();
    base_class_pointer -> var_base = 3400;
    base_class_pointer -> display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer -> var_base = 9448;
    derived_class_pointer -> var_derived = 98;
    derived_class_pointer -> display();
    //Above example is of Run Time Polymorphism
    return 0;
}