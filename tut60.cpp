// ********************* Virtual Base Class (Theory) **********************
//Example
/*
We make a class A
We derive class B & class C from base class A
We derive Class D from base class B & bae class C
A  ---->  B & C  ---->  D
Then we see that in class D that class A is inherite 2 times
To solve this ambiguity, We have the concept called 'Virtual Base Class'
In this way, We derive Class B and Class C from Class A as Virtual Base Class (here A is our Virtual Base Class)
Syntax : 
class derived_class_name : virtual visibility_mode base_class_name{
    (body)
};
*/