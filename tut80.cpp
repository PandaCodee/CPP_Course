// ********************* C++ Templates with Multiple Parameters **********************
#include<iostream>
using namespace std;

// Class Templates with Multiple Parameters
/*
template <class T1, class T2>
class nameOfClass{
    // body 
}
*/

template <class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }
        void display(){
            cout<<this->data1<<endl<<this->data2<<endl;
        }
};

int main(){
    myClass <int, char> obj1(1, 'c');
    obj1.display();
    myClass <int, float> obj2(1, 1.8);
    obj2.display();
    myClass <char, float> obj3('c', 1.8);
    obj3.display();
    //Template ka use krke humne  objects bna liye
    return 0;

}