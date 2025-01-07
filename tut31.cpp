// ********************* Default Arguments *********************
#include<iostream>
using namespace std;

float moneyReceived(int currentMoney, float fatcor=1.04){
    return currentMoney*fatcor;
}
int main(){
    int money=100000;
    cout<<"If you have "<<money<<"Rs in your bank account, you will recive "
    <<moneyReceived(money)<<"Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<"Rs in your bank account, you will recive "
    <<moneyReceived(money, 1.1)<<"Rs after 1 year"<<endl;
    
    return 0;
}