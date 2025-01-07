// ********************* Inheritance in C++ (With Theory) **********************
#include<iostream>
using namespace std;

//Base Class
class Employee{
      public:
        int id;
        float salary;
        Employee(int inpId){
            id = inpId;
            salary = 34;
        }
        Employee(){} // Make a Employee constructor
        //If we not make Base Class Constructor during Derive a Class from it, then it will throw an error 
};

//Derived Class
//Syntax: 
// {{class derived_class_name}} : {{visibility_mode}  {base_class_name}}
/*
    {
        class member/ methods/ etc...
    }

*/
// visibility_mode can be "private" or "public"
// It says that how you inherite your class :
// If you derived a class "publicly"  :  then the "public member" of Base Class will become "public member" of Derived Class  :: public
// If you derived a class "privately" :  then the "public members" of Base Class will become "private member" of Derive Class :: private
// Default visibility_mode is :: private
// Private Members are never inherited

//Creating a Programmer class Derived form Employee Base Class
class Programmer : Employee
//Jabhibi aap derive class banate ho to woh dafaultly Base Class ke constructor ko call krta he
{
    public:
        int languageCode;
        Programmer(int inpId){
            id = inpId;
            languageCode = 9;
        }    
        void getData(){
            cout<<id<<endl;
        }
};
int main(){
    Employee harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    // cout<<skillF.id<<endl Throws an error : Because we derive Programmer class privately, so "id" is private member of Base Class
    // cout<<skillF.id<<endl Throws an error : It will work if we derive Programmer class publicly
    skillF.getData();
    return 0;
}