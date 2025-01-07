// ********************* Selection Control Structure : if-else *********************
// ********************* C++ Control Structures *********************
// Following are Basic Control Structures
// 1. Sequence Structure
// 2. Selection Structure
// 3. Loop Structure

// Sequence Structure: Entry--> Action1--> Action2-->....--> Exit.

// Selection Structure:                       > True -->Action1-->...-->
//                      Entry--(Condition)-->{                          }--> Exit
//                                            > False-->Action2-->...-->

// Loop Structure: 
//
//             {---------------------(Loop)-----------------------}                                                          
//             {--> Entry--(Condition)-->True -->Action1-->...--> }                        
//                              |         
//                               -->False--> Exit
// Yeh hamare basics structures hote he jo c++ programs shape karne me madat krte he
// Ab dekhenge ki ise program me kis tarah model kiya jata he

// 1. if-else statement 
// 2. if-else ladder : multiple if-else statments are here
// 3. switch case
#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    // Selection Control Structure: if else-if else ladder
    if((age<18) && (age>0) || (age>50)){
        cout<<"You cannot come to the party"<<endl;
    }
    else if(age==18){
        cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    }
    else if(age==0){
        cout<<"You are not yet born"<<endl;
    }
    else if(age<0){
        cout<<"This value is not acceptable. Please, enter a non-negative value"<<endl;
    }
    else{
        cout<<"You can come to the party"<<endl;
    }
    //Uper wala programm run krke jarur dekhna

    return 0;
}