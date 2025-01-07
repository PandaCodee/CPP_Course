// ********************* Static Function *********************
#include <iostream>
using namespace std;

class Employee
{
    int id;
    // int count;     //ise hum static banana chahate he kyuki ye code ko count kar paye
    static int count; // by default static variable 0 se initialize hota he
public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getConunt(void){
        // cout<<id; //Throws an error, coz id is a non-static member variable

        cout<<"The value of count is "<<count<<endl;
    }//Here we make a static function
};
// Count is the satic data member of class employee
int Employee ::count; // Default value is 0
int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1
    // harry.count = 1 //We cannnot do this as 'id' & 'count' are private

    harry.setData();
    harry.getData();
    Employee::getConunt();

    rohan.setData();
    rohan.getData();
    Employee::getConunt();

    lovish.setData();
    lovish.getData();
    Employee::getConunt();
    return 0;
}