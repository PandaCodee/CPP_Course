// ********************* Operator Precedence *********************
#include<iostream>
using namespace std;

int main(){
    int a=15, b=4;
    //niche diye gye har ek operation ko ek ek comment out krke run kre 
    int c = (b+(a*4)-(10+a/b));
    // int c = ((((b)+a*4)-10)+a/b);
    // int c = b+a*4-10+a/b;
    // int c = (b+(a*4)-10+(a/b));
    // Tip --> Brackets lagaye esse code samajneme easy ho jata he
    cout<<c;
    return 0;
}