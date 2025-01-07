// ********************* Loop Control Structure *********************
// ********************* for Loop *********************
#include<iostream>
using namespace std;
/*The are three types of loops:*/
// 1. for loop
// 2. while loop
// 3. do-while loop
int main(){
  // Syntax For for loop
  
  // for (initialisation; condition; updation)
  // {
  //   loop body(C++ code);
  // }
  
  for (int i = 1; i <=40; i++)
  {
    cout<<i<<endl;
  }
  // Example of infinite for loop
  // Warning: Infinite loop dhyane se chalaye,
  // code run stop krne ke liye (ctr + C) dabaye
  // for (int i = 1; 34<40; i++)
  // {
  //     cout<<i<<endl;
  // }
  return 0;
}
