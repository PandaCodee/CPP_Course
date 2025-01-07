// ********************* Pointers And Array *********************
//Now we goint to understand using poiters with array
#include<iostream>
using namespace std;
//&a --> address of a.
//marks --> address of first block.
int main(){
    //********Array Examples********
    int marks[4] = {23, 455, 56, 89};
    cout<<"These are marks"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    cout<<endl;
    //Pointer Arithmetic
    //Address New (p+i) = Address Current(p) + i*Sizeof(datatype)
    int* p=marks;//Here we make pointer variable p and give the value of marks
    cout<<"The value of marks[0] is "<<*(p)<<endl;    
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl<<endl;

    cout<<"The value of *(p) is "<<*(p)<<endl;    
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl<<endl;

    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;


    return 0;
}