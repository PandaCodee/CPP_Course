// ********************* Continue Statements *********************
#include<iostream>
using namespace std;

int main(){
    //'Continue' se condition chhod ke baki allitration continue print hogi
    for (int i = 0; i <= 10; i++)
    {
        if (i>=3 && i<=7)
        {
            continue;
        }
        cout<<i<<endl;
    }
    cout<<endl;
    return 0;
}
