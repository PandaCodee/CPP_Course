// ********************* Reference Varialbles *********************
// ekhi variable ke alg alg naam
#include<iostream>
using namespace std;

int main(){   
    float x=455;
    float & y=x;
    cout<<x<<endl;
    cout<<y<<endl;
    
    cout<<endl;
    //Swaping The Values
    int a,b,c;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    cout<<endl;
    c=a, a=b, b=c;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
};