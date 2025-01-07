// ************************** Float, Double & Long Double Literals **************************
#include<iostream>
using namespace std;

int main(){
    
    float d=34.4f;
    // 34.4 this value is considered as double by compiler
    // so for specify it is as float we write 'f' or 'F' after the decimal
    // same for specify long double we write 'l' or 'L' after the decimal
    // if we don't specify its type then it is by default "double"
    long double e=34.4l;

    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The value of d is "<<d <<endl <<"The value of e is "<<e;
    // double ka size 8 hota he 
    // float ka size 4 hota he
    // lond double ka size 12 hota he
    return 0;
}