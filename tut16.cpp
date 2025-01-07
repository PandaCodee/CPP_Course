// ********************* Break Statements *********************
#include<iostream>
using namespace std;

int main(){
    //'Break' statements se loop ke bahar nikal jate he
    for (int i = 0; i <= 5; i++)
    {
        if (i==4)
        {
            break;
        }
        cout<<i<<endl;
    }
    cout<<endl;
    return 0;
}