// ********************* Map in C++ STL **********************
//visit : cpp reference map

#include<iostream>
#include<map>
#include<string>
using namespace std;

//Key-value pair
//Map is an associative array

int main(){
    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 59;    
    marksMap["Rohan"] = 2;
    marksMap.insert({{"Soham", 100}, {"Shubham", 101}, {"Akshar", 99}});//Element Inster Alphabeticle wise
    map<string, int> :: iterator iter;
    for(iter = marksMap.begin(); iter != marksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl; 
    }    
    cout<<"The size is : "<<marksMap.size()<<endl;
    cout<<"The size is : "<<marksMap.max_size()<<endl;
    cout<<"The size is : "<<marksMap.empty()<<endl;

    //site pe visit krke alg alg map ke chise explore kro
    return 0;
}