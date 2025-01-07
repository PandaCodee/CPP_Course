// ********************* List in C++ STL **********************
//visit : cpp reference list
#include<iostream>
#include<list>
using namespace std;

//It is a bidirectional liner list he jo insertion aur deletion ke efficient operations dikhati he

void display(list<int> &lst){
    cout<<"Display run : ";
    list<int> :: iterator itr;
    for (itr = lst.begin(); itr != lst.end(); itr++)//lst.end() give a reference that list is end
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1;//Lit of 0 length
    list1.push_back(5);
    list1.push_back(1);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";
    // iter++;
    // cout<< *iter<<" ";

    display(list1);

    list<int> list2(7);//Empty list of size 7
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 9;
    iter++;
    *iter = 6;
    iter++;
    display(list2);

    //Now we see how to delet an element of list
    //Removing elements from the list
    list1.pop_back();//Delet from back
    display(list1);
    list1.pop_front();//Delet from front
    display(list1);
    list1.remove(1);//Delet ALL that perticular element
    display(list1);

    // cout<<list1.size()<<endl;

    list2.remove(0);
    display(list2);

    // cout<<list2.size()<<endl;

    //Sorting the list 
    list2.sort();//sort in accending order
    display(list2);

    //Merging the lists
    list1.merge(list2);
    cout<<"List1 after merging : ";
    display(list1);
    //Ek bar list 2 ko bina sort kiye merge krke dekhna

    //Reversing the list
    list1.reverse();
    display(list1);

    //site pe visit krke alg alg list ke chise explore kro
    return 0;
}