// ********************* Member Function Template and Overloading Template Functions **********************
#include<iostream>
using namespace std;

template <class T>
class Harry{
    public:
        T data;
        Harry(T a){
            data = a;
        }
        // void display(){
        //     cout<<data<<endl;
        // }
        void display();
};

template <class T>
void Harry<T> :: display(){
            cout<<data<<endl;
        }

void func(int a){
    cout<<"I am first funct() "<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"I am templatised funct() "<<a<<endl;
}
int main(){
    // Harry<float> h(5.7);
    // Harry<char> h('c');
    // Harry<int> h(87);
    // cout<<h.data<<endl;
    // h.display();

    func(4); // Exact match takes the Highest priority
    func('c');
    func(4.5);
    return 0;
}