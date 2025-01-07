// ********************* Loop Control Structure *********************
// ********************* do-while Loop *********************
#include<iostream>
using namespace std;

int main(){
    // Syntax For do-while loop
    
    // do
    // {
    //     C++ statements;
    // }while(condition);
    

    //Printing 1 to 50 using do-while loop
    int i=1;
    do
    { 
        cout<<i<<endl;
        i++;
    }while(i<=50);

    //Then whats the difference between 'while' and 'do-while'
    //Here it is

    // int i=1;
    // do
    // { 
    //     cout<<i<<endl;
    //     i++;
    // }while(false);
    //Agar condition false nikali, 
    //tabhibhi loop ek na ek baar chalegahi chalega
    return 0;
}