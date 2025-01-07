// ********************* Vectors in C++ STL **********************
//visit : cplusplus.com/reference/vector/vector/   /* IMP */
#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<"Displaying This Vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        // cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";//Access element
    }
    cout<<endl;
}
//vector : it is just like array, it adjust its size itself
int main(){
    vector<int> vec1;//zero length vector
    vector<char> vec2(4);//4-element character vector
    vector<char> vec3(vec2);//4-element character vector from vec2
    vector<int> vec4(6, 3);//6-element vector of 3s
    display(vec1);
    vec2.push_back('5');
    display(vec2);
    display(vec3);
    display(vec4);
    
    /*Printing The Vector*//*Use of push_back*//*Use of pop_back*/
    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    cout<<"Enter an element to add to this vector"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>element;
        vec1.push_back(element);//Add element at the end
    }
    vec1.pop_back();//Delete last element
    display(vec1);

    /*Use of Insert */
    vector<int> :: iterator iter = vec1.begin(); //creating iterator
    // vec1.insert(iter, 566); // first element ke pehele insert kr dega
    // vec1.insert(iter+1, 566);  // second element ke pehele insert kr dega //or// first element ke bad insert kr dega
    // vec1.insert(iter+1, 5, 566);  // makes 5 copies between first and second element
    vec1.insert(iter+2, 7, 566);  // makes 7 copies between second and third elementc
    display(vec1);
    
    /*Use of Size*/
    cout<<vec4.size();
    
    //site pe visit krke alg alg vector ke chise explore kro
    return 0;
}