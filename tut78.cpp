// ********************* Templates (Theory) **********************
// class se bnta he object
// toh object ke liye class ek template he
// Agr me keheta hu template se class banau toh
// class ke liye template, template hi he
//templates are also called as parameterised classes
//Why use templates ->
//-to follow DRY(do not repeat yourself)
//-Generic Programming

//Syntax for template
//template <class T> // T can be int, float, char, etc...
// class vector{
//     T* arr;
//     public:
//         vector(T*arr){
//              (code)
//         }
//         and many other methods
// }
//Now it is not class, because it represents many classes so it is template
// int main(){
//     vector<int>myVec(ptr);
//     vector<float>myfVec(ptr);
// }

//VERY USEFUL THING IN COMPATATIVE PROGRAMMING ALSO STL