// ********************* Inline Function *********************
#include<iostream>
using namespace std;

inline int product(int a, int b){
    return a*b;
}
//compiler kya karega ki jaha jaha product function call ho rha he toh usko call nhi krega sidha code udhar paste krega
//Kab use kre --> Agr aapka function chhota ho jo jyada memory na leta ho tab use inline bna sakte ho wrna ulta inline tumpehi bhari pad jayega
//Kab use na kre --> 
//*jabhi recursion hota he tab not recommended to use inline function
//*Agr static variables use ho rhe he function me toh inline use na kre
//compiler function ko dekhkar inline banata he
int main(){
    int a, b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    return 0;
}