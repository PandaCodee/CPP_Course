// ********************* Loop Control Structure *********************
// ********************* while Loop  *********************

#include<iostream>
using namespace std;

int main(){
    // Syntax For while loop
    
    // while (condition):
    // {
    //      C++ statements;   
    // }
    
    //Printin 1 to 50 using while loop
    int i=1;
    while (i<=50)
    {
         cout<<i<<endl;
         i++;
    }

    // Example of infinite while loop
    // Warning: Infinite loop dhyane se chalaye,
    //   code run stop krne ke liye (ctr + C) dabaye

    // int i=1;
    // while (true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    return 0;
}