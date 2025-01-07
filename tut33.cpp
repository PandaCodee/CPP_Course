// ********************* Recursions & Recursive Functions *********************
//Ek function apne aap ko khudi call krta he
//Aur tabtak call krte reheta he jab tak base condition match nhi ho jati
#include<iostream>
using namespace std;
int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n* factorial(n-1);
}
int main(){
    // Factorial of a Number
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1 by defination
    // 1! = 1 by defination
    // n! = n * (n-1)!
    int a;
    cout<<"Enter a number "<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    return 0;
}