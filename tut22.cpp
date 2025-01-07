// ********************* Unions *********************
//unions kya hote he --> 
//unions structure ki tarah hi hote he jo ki better memory provide krte he

#include<iostream>
using namespace std;

union money
{
    //union me at a time sirf ek chis istemal me le skte he
    int rice;       //mano ki ye memory me jga leh rha he 4 byte ki
    char car;       //mano ki ye memory me jga leh rha he 1 byte ki
    float pounds;   //mano ki ye memory me jga leh rha he 4 byte ki
    // in tino me se jo maximum he utni memory allocate ho jayegi i.e 4 bytes
} ;

int main(){
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.car;
    //agr ' cout<<mi/1.rice; ' dalenge toh hame ek garbage value milegi kyuki (i.e 99)
    //hum at a time ek hi datatype use skte he
    //agr hum, m1.car hta de toh ' cout<<mi/1.rice; ' shi se print hoga i.e "34"
    return 0;
}