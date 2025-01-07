// ********************* Nesting of Member Functions *********************
/*
C++ --> initially called --> C with classes by stroustroup
Class --> Extention of structures (in C)
Structures had limitations
        --> Members are public
        --> No methods
Classes --> Structure + More
Classes --> Can have Method and Properties
Classes --> Can make few members as private & few as public
Structures in C++ are typedefed
You can declac=re objects along with the class declaration like this:
    /*
    class Employee{
           //Class Defination
    }harry, rohan, lovish
    harry.salary = 8 makes nofor sence if salary is private
    */
// Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

class binary
{
    //private :
    //By default class ke member private hote he
    string s;

public:
    void read(void);
    void chk_bin(void); // check binary
    void ones_complement();
    void display();
};

void binary ::read(void)
{
    cout << "Enter a binary number"<<endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_complement(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b;
    b.read();
    //b.chk_bin(); //  isko hmne ones_complement me hi nesting kr diya
    //If you make chk_bin() private then it will throw error, to prevent this we nesting it in another function 
    b.display();
    b.ones_complement();
    b.display();
    return 0;
}