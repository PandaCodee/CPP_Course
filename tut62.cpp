// ********************* Constructors In Derived Classes (Thoery) **********************
/*
We can use constructors in derived classes in C++.
If base class constructor does not have any arguments, there is no need of any constructor in derived class.
But there are one or more arguments in the base class constructor,
derived class need to pass arguments to the vase class constructor.
If both base and derived classes have constructors, base class constructor is executed first.
*/

// ********************* Constructors In Multiple Inheritance **********************
// A & B ---->  C 
/*
In multiple inheritance, base classes are constructed in the order in which they appear in the class declaration.
In multiple inheritance, the constructor are executed in the order of inheritance.
*/

// Special Syntax
/*
C++ supports an special syntax for passing arguments to multiple base classes.
The constructor of the derived class receives all the arguments at once and then will pass the call to the respective base classes.
The body is called after all constructors are finished executing.
*/
// Derived-Constructor(arg1, arg2, arg3....):Base1-Constructor(arg1, arg2), Base2-Constructor(arg3, arg4){
// ....
// } Bas1-Constructor(arg1, arg2)

// Special Case of Virtual Base Class
/*
The constructor for virtual base classes are invoked before an nonvirtual base class.
If there are multiple virtual base classes, they are invoked in the order declared.
Any no-virtual base class are then constructed before the derived class constructor is executed.
*/