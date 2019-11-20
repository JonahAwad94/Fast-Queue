#ifndef FAST_QUEUE
#define FAST_QUEUE

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class FastQueue
{
    public:
        // Adds a new element to the end of the queue.
        void enqueue( T );

        // Removes an element from the head of the queue. 
        // Does nothing if the queue is already empty.
        T dequeue();

        // Returns reference to the first element of the queue.
        // Throw out_of_range if the container is empty.
        T& head();

        // Returns reference to the last element of the queue.
        // Throws out_of_range if the container is empty.
        T& tail();

        // Returns reference to the index-th elemeent of the queue.
        // Throws out_of_range if the container size is less than index.
        T& at(int i);

        // Returns the number of elements in the queue.
        int size();

        // Returns the size of allocated memory in terms of elements.
        int capacity();

        // Shrinks the size of allocated memory to exactly fit the elements
        // currently in queue. 
        void shrink_to_fit();

        // Print function
        void printQueue();

        
    private:
        vector<T> queue;
        typename vector<T>::iterator queue_it;
};


#endif