// ********************* Pointers to Object and Arrow Operator **********************
#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};
int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;// new lagake naya object ban jata he 
    // c1.setData(1, 54);
    // c1.getData();
    (*ptr).setData(1, 54);
    //during dereferencing --> (*ptr) Brakects lagana na bhule, beacause dot operator brackets ki precedence jyada he dot operator se
    // (*ptr).getData();
    //arrow operator :
    ptr -> getData();//arrow ka matlab: is pointer ko dereference kro

    //Array ob objects :
    Complex *ptr1 = new Complex[4];
    ptr1 -> setData(1, 4);
    ptr1 -> getData();
    return 0;
}