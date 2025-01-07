// ********************* Dynamic Initialisation of Objects Using Constructors **********************
#include<iostream>
using namespace std;

class BankDeposite{
    int principle;
    int years;
    float interestRate;
    float returnValue;
    public:
        BankDeposite(){}
        BankDeposite(int p, int y, float r);//r can be a value like 0.04
        BankDeposite(int p, int y, int r);//r can be a value like 14
        void show();
};
BankDeposite :: BankDeposite(int p, int y, float r){
    principle = p;
    years = y;
    interestRate = r;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}
BankDeposite :: BankDeposite(int p, int y, int r){
    principle = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}
void BankDeposite :: show(){
    cout<<endl<<"Princile amount was "<<principle<<" Return value after "<<years
    <<" years is "<<returnValue<<endl<<endl;
}
int main(){
    BankDeposite bd1, bd3;
    int p, y;
    float r;
    int R;

    cout<<"Enter the value of principle amount, years and interest rate"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposite(p, y, r);
    bd1.show();
    
    cout<<"Enter the value of principle amount, years and interest rate"<<endl;
    cin>>p>>y>>R;
    BankDeposite bd2 = BankDeposite(p, y, R);
    bd2.show();
    return 0;
}