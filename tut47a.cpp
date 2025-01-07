// ********************* Parameterized and Default Constructor **********************
#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    Complex(int, int);//Constructor Declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex :: Complex(int x, int y)// ----> This is a parameterized constructureas as it takes 2 parameters
{
    a = x;
    b = y;
}
int main(){
    //Implicit Call
    Complex a(4, 6);

    //Explicit Call
    Complex b = Complex(5, 7);

    a.printNumber();
    b.printNumber();
    return 0;
}