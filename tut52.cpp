// ********************* Destructors **********************
#include<iostream>
using namespace std;
// destructor ka kaam --> object delet krne ke baad woh jo memory leke baitha tha usse free krde
//Destructor never takes and arguments nor does it return any value
int count = 0;//declare globle variable
class num{
    public:
        num(){
            count++;
            cout<<"Thsi is the time when constructor is called for object number"<<count<<endl;
        }
        //Now we see Destructor
        ~num(){
            cout<<"This is the time when my destructor is called for object number"<<count<<endl;
            count--;
        }    
}; 
int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering the block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting thi block"<<endl;
    }
    //After Exiting the block, Destructor will automatically called for number2 & number3 objects
    cout<<"Back to main"<<endl;
    return 0;
}
//After Exiting the block, Destructor will automatically called for number1 object