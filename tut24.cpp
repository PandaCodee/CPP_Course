// ********************* Enum 2.0 *********************
#include<iostream>
using namespace std;

int main(){
    enum Meal {breakfast=1, lunch, dinner};
    //enum se hum breakfast lunch and dinner ko integer values de rhe he
    //like breakfast ko 0, lunch ko 1, and dinner ko 2
    cout<<breakfast<<endl;  
    cout<<lunch<<endl; 
    cout<<dinner<<endl<<endl; 
    //isse program jyada readable ho jata he
    //breakfast, lunch, dinner ye ek datatype jese work krenge
    Meal m1 = lunch;
    cout<<m1<<endl<<endl;
    cout<<(m1==1)<<endl;//agr condition true rhi toh 1 print hoga nhito 0
    cout<<(m1==2)<<endl;
    return 0;
}