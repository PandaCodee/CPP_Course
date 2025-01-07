// ********************* Array *********************
/*
*An array is a clooction of items of similar type stored in contigious memory locations.
*Sometimes, a simple variable is not enough to hold all the data.
*For example, lets say we want to store the marks of 25000 students,
 having 25000 different variables for this task is not feasible.
*To slove this problem, we can define an array with size 25000 that can hold the marks of all students.
*/
#include<iostream>
using namespace std;

int main(){
    // Array Example
    int marks[4] = {23, 45, 56, 89};
    //yha hamne continous block of memory associate kr diye he array bna kr.
    //marks[] bhi likh sakte he, apna computer itna samrt he ki woh khud count kr lega. 
    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    //You cant change tha value of an array before it print
    marks[2]=455;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    //ek toh array me ese value de sakte he yaa phir
    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;
    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl<<endl;
    //isi chis ko for loop ke help se print karenge
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    cout<<endl;
    /*
    Quick Quiz : do the same by using while and do-while loops!!
    Challenge Accepted
    
    Using while loop
    int i=0;
    while (i<4)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    }
    
    Now using do-while loop
    int i=0;
    do
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    } while (i<4);
    */ 
    return 0;
}