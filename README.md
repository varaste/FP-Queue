## Fundamentals-Computer-and-Programming-P5
Fifth Project Computer and Programming Fundamentals 

# Queue in C++
This is a simple queue implementation in C++ using an array.

## Features
+ enqueue() - Add an element to the back of the queue
+ dequeue() - Remove an element from the front of the queue
+ peek() - Get the element at the front of the queue without removing it
+ isEmpty() - Check if the queue is empty
+ isFull() - Check if the queue is full

```c++
Queue q(size); // Create a queue of given size

q.enqueue(value); // Add value to back of queue

value = q.dequeue(); // Remove element from front of queue

value = q.peek(); // Get value of front element

if(q.isEmpty()) {
  // Queue is empty
}

if(q.isFull()) {
  // Queue is full
}
```

The queue is implemented using a circular array, with head and tail pointers to track the start and end of the queue.
