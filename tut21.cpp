// ********************* Structures *********************
// Stucture hota kya he? --> User defined datatype
//Stucture use to combine different types of items.
//Array use to combine same type of items.

#include<iostream>
using namespace std;

typedef struct employee
{
    int eId;       //mano ki ye memory me jga leh rha he 4 byte ki
    char favChar;  //mano ki ye memory me jga leh rha he 1 byte ki
    float salary;  //mano ki ye memory me jga leh rha he 4 byte ki
} ep;
// in tino ki kul milake memory allocate ho jayegi i.e 4+1+4 = 9 bytes
//typedef ki help se hamne 'struct employee' ka shortcut bna liya 'ep' nam se 
//jaha aapko pehele struct employee likhna padta tha wha ab sirf "ep" likhne se kam ho jayega
int main(){
    ep harry;
    ep shubham;
    struct employee rohandas;
    harry.eId = 77;
    harry.favChar = 'x';
    harry.salary = 200000;

    cout<<"The value of Harry's eId is "<<harry.eId<<endl;
    cout<<"The value of Harry's favChar is "<<harry.favChar<<endl;
    cout<<"The value of Harry's salary is "<<harry.salary<<endl;
    
    return 0;
}