/***************************************************\
|   Jonah Alexander-Awad                           |
|   FastQueue implementation for CSCI 335          |
\***************************************************/


#include "FastQueue.h"

template<class T>
void FastQueue<T>::enqueue( T element )
{
    queue.push_back(element); // Add element to end of queue
}


template<class T>
T FastQueue<T>::dequeue()
{
    if (!queue.empty()) // if queue is empty, do nothing
    {
        T returnElement = queue[0]; // Retrieve first element in queue
        queue.erase(queue.begin()); // "dequeue" first element in queue
        return returnElement; // return first element
    }
}


template<class T>
T& FastQueue<T>::head()
{
    if (!queue.empty()) // if queue is not empty, return reference to first element
    {
        return queue.front();
    }
    else // if queue is empty, throw out_of_range
    {
        throw out_of_range("Queue is empty");
    }
}


template<class T>
T& FastQueue<T>::tail()
{
    if (!queue.empty()) // if queue is not empty, return reference to last element
    {
        return queue.back();
    }
    else // if queue is empty, throw out_of_range
    {
        throw out_of_range("Queue is empty");
    }
}


template<class T>
T& FastQueue<T>::at(int i)
{
    if (queue.size() > i ) // if queue is larger than index, return reference to index
    {
        // for (queue_it = queue.begin(); queue_it != )
        return queue[i];
    }
    else // if queue is empty, throw out_of_range
    {
        throw out_of_range("Out of queue range.");
    }
}


template<class T>
int FastQueue<T>::size()
{
    return queue.size();
}


template<class T>
int FastQueue<T>::capacity()
{
    return queue.capacity();
}


template<class T>
void FastQueue<T>::shrink_to_fit()
{
    size_t size = queue.size(); // get queue size
    vector<T> temp(size); // create temp vector of that size

    // populate temp vector
    for (size_t i = 0; i < size; i++)
    {
        temp[i] = queue[i];
    }

    // swap contents of temp vector and queue
    queue.swap(temp);
}


template<class T>
void FastQueue<T>::printQueue()
{
    for (auto i : queue)
    {
        cout << i << " ";
    }
}

////////////////////////////////////////////
// OPTIONAL DRIVER MAIN FUNCTION BELOW    //
// UNCOMMENT TO USE. FEEL FREE TO DELETE. //
////////////////////////////////////////////

/*
int main()
{
    // initialization with integer
    FastQueue<int> nums;

    // Enqueue test
    cout << "\"Enqueueing\" 0,1,2,3,4,5 " << endl;
    nums.enqueue(0);
    nums.enqueue(1);
    nums.enqueue(2);
    nums.enqueue(3);
    nums.enqueue(4);
    nums.enqueue(5);
    nums.enqueue(6);
    
    nums.printQueue();
    cout << endl;

    // Dequeue test
    cout << "Dequeueing twice. " << endl;
    nums.dequeue();
    nums.dequeue();

    nums.printQueue();
    cout << endl;

    // Test head() is returning by reference
    cout << "Changing head of queue to 100" << endl;
    nums.head() = 100;
    nums.printQueue();
    cout << endl;

    // Test tail() is returning by reference
    cout << "Changing tail of queue to 100" << endl;
    nums.tail() = 100;
    nums.printQueue();
    cout << endl;

    // Test at() is returning by reference
    cout << "Changing index 2 to 100" << endl;
    nums.at(2) = 100;
    nums.printQueue();
    cout << endl;

    // Test size() and capacity()
    cout << "Queue size = " << nums.size() << endl;
    cout << "Queue capacity = " << nums.capacity() << endl;
    cout << endl;

    // Test shrink_to_fit()
    nums.shrink_to_fit();
    cout << "Shrinking queue to exactly fit its elements." << endl;
    cout << "Queue size = " << nums.size() << endl;
    cout << "Queue capacity = " << nums.capacity() << endl;
    cout << endl;

    return 0;
}
*/