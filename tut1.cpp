// ************************** Datatypes and Global Value **************************
#include<iostream>
using namespace std;
int glo=6;
void sum(){
    int a;
    cout<<glo;
}
int main(){
    int glo=9;
    glo=32;
    int a=14;
    int b=30;
    float pi=3.14;
    char c='u';
    cout<<"The value of a is "<<a 
    <<".\nThe value of b is "<<b 
    <<".\nThe value of pi is "<<pi
    <<"\nThe value of c is "<<c<<endl;
    // upar wala code comment se hata ke run kr lena//
    //local aur global var same name ho skte he lekin preference sabse pehele local vale ko milegi//
    sum();
    return 0;
}