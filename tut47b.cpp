#include<iostream>
using namespace std;

class Point{
    int x, y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }
        void displayPoint(){
            cout<<"The Point is ("<<x<<", "<<y<<")"<<endl; 
        }
};
//Assignment-->
//Create a Function (Hint: Make it a friend function) which takes point objects and 
//Compute the distance those  points
int main(){
    Point p(1, 1);
    p.displayPoint();

    Point q(4, 6);  
    q.displayPoint();
    return 0;
}