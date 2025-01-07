// ********************* Containers in C++ STL **********************

//STL = Containers + Algorithms + Iterators
//          |             |          |
//   obejct which    procedure to  object which points to 
//    stores data     store data   an element of a container
 
//Containers
//    |-> 1.Sequence Containers    ->Linear Fashion me data stores krte he [  O -> O -> O  ]       ->|-> Vector
//    |                                                                  (here O are elements)       |-> List
//    |                                                                                              |-> Dequeue
//    |
//    |-> 2.Associative Containers ->Direct Access, Tree Fashion me data stores krte he [  O  ]    ->|-> Set/ Multiset             
//    |                                                                                   / \        |-> Map/ Multimap
//    |                                                                               [  O   O  ] 
//    |
//    |-> 3.Derived Containers     ->Real World Modelling  ->|-> Stack         -> Work on LIFO Principle (Last In, First Out)
//                                                           |-> Queue         -> Work on FIFO Principle (First In, First Out)
//                                                           |-> Priority_Queue


//When to use which?

//Sequence Containers
//1. Vector -> Random Access is Fast
//          -> Insertion / Delition in Middle is Slow
//          -> Insertion / Delition at the end is Fast    
//
//2. List -> Random Access is Slow
//        -> Insertion / Deletion in Middle is Fast
//        -> Insertion / Deletion at the end is Fast

//Associative Containers -> All Operations are Fast except Random Access

//Derived Containers -> Depends -> Through Data Structure we know the dependency 