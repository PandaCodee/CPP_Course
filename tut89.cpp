// ********************* Function Objects (Functors) in C++ STL **********************
// visit : cpp reference function objects
//visit : cpp algorithm stl
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

void display(int *arr){
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;;
    }
    cout<<endl;
}
int main(){
    //Function Objects (Functor) : Function wrapped in a class so that it avalable like an object
    int arr[] = {1, 73, 4, 2, 54, 7};
    display(arr);
    sort(arr, arr+5);//sort 1st to 5th element in accending order
    display(arr);
    sort(arr, arr+5, greater<int>());// sort in decending order // Here 'greater' is a function object
    display(arr);
    
    //site pe visit krke alg alg function objects and algorithms explore kro
    return 0;
}