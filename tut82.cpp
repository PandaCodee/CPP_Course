// ********************* Function Templates and Function Template with Parameter **********************
#include<iostream>
using namespace std;

// float funcAverage1(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// float funcAverage2(int a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

template <class T1, class T2>
float funcAverage3(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b){//swap already mojut hota he standard namespace me isliye 'swapp' likha he
    T temp = a;
    a = b;
    b = temp;
}
int main(){
    // float a;
    // a = funcAverage1(5, 2);
    // cout<<"The average of these numbers is "<<a<<endl;
    // float b;
    // b = funcAverage2(5, 2.4);
    // cout<<"The average of these numbers is "<<b<<endl;
    //Instead of making too many functions, now we make a function template

    float c;
    c = funcAverage3(5, 2.4);
    cout<<"The average of these numbers is "<<c<<endl;
    float d;
    d = funcAverage3(5, 2);
    cout<<"The average of these numbers is "<<d<<endl;

    int x = 5, y = 7;
    swapp(x, y);
    cout<<x<<endl<<y<<endl;
    return 0;
}