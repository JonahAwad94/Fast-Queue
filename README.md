# Fast-Queue
 Queue implementation in C++ using vectors for CSCI 335
 

## Functions:
**Initialization**
 - FastQueue<"type"> "variableName";
```
FastQueue<int> nums;
```
\
\
**enqueue**
 - Adds new element to end of the queue
```
nums.enqueue(1);
```
\
\
**dequeue**
 - Removes an element from the head of the queue.
 - Does nothing if the queue is already empty.
```
nums.dequeue();
```
\
\
**head**
 - Returns reference to the first element of the queue.
 - Throws out_of_range if the container is empty.
```
nums.head();
```
\
\
**tail**
 - Returns reference to the last element of the queue.
 - Throws out_of_range if the container is empty.
```
nums.tail();
```
\
\
**at**
 - Returns reference to the element at the provided index of the queue.
 - Throws out_of_range if the container is smaller than the provided index.
```
nums.at(5);
```
\
\
**size**
 - Returns the number of elements in the queue.
```
nums.size();
```
\
\
**capacity**
 - Returns the size of the allocated memory in terms of elements.
```
nums.capacity();
```
\
\
**shrink to fit**
 - Shrinks the size of allocated memory to exactly fit the elements currently in the queue..
```
nums.shrink_to_fit();
```
\
\
**PrintQueue**
 - Prints contents of the queue
```
nums.printQueue();
```
