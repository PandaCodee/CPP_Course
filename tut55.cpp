// ********************* Protected Access Modifier **********************
#include<iostream>
using namespace std;

class Base{
    // suppose int a, b; yeh do private integers he. 'a' unta jyada private nhi he jitna 'b' he.
    // lekin 'a' ko me protected rakhna chahta hu jisse koi bhi ise direct access na kr paye.
    protected:
        int a;
        //"protected", private jesa hi hota he bas woh inheritate ho skta he.
    private:
        int b;

};
/*
For a protected member :
                           Public derivation    Private Derivation    Protected Derivation 
    1. Private Members      Not Inherited         Not Inherited           Not Inherited      // Private Members are not Inheritate
    2. Protected Members      Protected              Private                Protected
    3. Public Members          Public                Private                Protected
*/
class Derived : protected Base{
    //yaha int a bhi protected ban jayega. and isi class ke members usko access kr payenge.
};

int main(){
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since 'a' is protected in both base as well as derived class
    return 0;
}