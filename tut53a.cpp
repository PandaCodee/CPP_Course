// ********************* Inheritance in C++ (Theory) **********************
/*
Reusability is a very important feature of OOPs.
In C++ we can reuse a class and add additional features to it.
Reusing classes saves time and money.
Reusing already tested and debugged class will save a lot of effort of 
developing and debugging the same thing again.
*/

/*
What is Inheritance in C++?
The comcept of Reusability in C++ is supported using Inheritance
We can reuse the properties of an existing class by inheritance from it
The existing class is called as the "Base Class"
The new class which is inherited is called as the "Derived Class"
Reusing classes saves time and money
There are different types of inheritance in C++ 
*/

/*
Forms of Inheritance in C++ :
1.Single Inheritance
2.Multiple Inheritance
3.Hierarchical Inheritance
4.Multilevel Inheritance
5.Hybrid Inheritance


1.Single Inheritance : A Derived Class with only one Base Calss.
                        A  ---->  B
                        B = A + More


2.Multiple Inheritance : A Derived Class with more than one Base Class.
                        A & B  ---->  C
                        C = A + B + More


3.Hierarchical Inheritance : Several Derived Classes form a single Base Class.
                        A  ---->  C & D 
                        C = A + More(1)
                        D = A + More(2)


4.Multilevel Inheritance : Deriving a Class from already Derived Class.
                        A  ---->  X  ----> C
                        X = A + More(1)
                        C = X + More(2) = A + More(1) + More(2)


5.Hybrid Inheritance : Hybrid Inheritance is a combination of Multiple Inheritance and Multilevel Inheritance
                     A Class is derived from two classes as in Multiple Inheritance which are derived from a Class as Hirarchical Inheritance
                     However, one of the parent classes is not a base class.
                     A  ---->  X & Y  ---->  C
                     X = A + More(1)
                     Y = A + More(2)
                     C = X + Y + More(3) = A + More(1) + More(2) + More(3)
*/