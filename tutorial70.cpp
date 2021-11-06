// STL ->Standard Template Library
/* 
Components of STL -> 1. Containers -> stores data -> use template classes
                     2. Algorithms -> sorting, searching ( already written, using template functions )
                     3. Iterators  -> object, points to an element in a container -> handled just like pointers
                                   -> connects algorithms with containers

STL is used because it is a good idea, not to re-invent a wheel.

*/
// STL -> Containers + Algorithms + Iterators
// Containers in STL
/*
Containers :
    1. Sequence Containers    -> Stores the data in Linear fashion : []->[]->[]->[] : Eg: Vector, List, Double_Ended_Queue
    2. Associative Containers -> Direct Access -> map, multi-map, dictionary, Set, multi-set : { Trees }
    3. Derived Containers     -> Real-world modelling -> Stack[ LIFO, FIFO ], Queue, Priority_Queue

    1. Sequence Containers:
            i) Vector -> Random access (RA) = Fast
                         Insertion / Deletion in middle = Slow
                         Insertion / Deletion at the end = Fast

            ii) List -> Random access (RA) = Slow
                        Insertion / Deletion in middle = Fast
                        Insertion / Deletion in the end = Fast
            
    2. Associative Containers :
                        -> Random access (RA) = Slow
                        Insertion / Deletion in middle = Fast
                        Insertion / Deletion in the end = Fast

    3. Derived Containers :
                        -> Depends -> Data Structure

*/