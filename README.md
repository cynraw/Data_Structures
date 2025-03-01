# Data Structures
Deepening my knowledge in data structure while participating in GOL clinics

## Linked lists
- Is a linear data structure to store data in uncontagious memory locations
- 3 types of linked lists Singly linked lists, doubly linked lists and circular linked lists
- Collection of nodes that contain two members, one data item and a pointer to the next node (in singly linked lists)
- doubly linked list have another member which is a pointer that ppoints to the previous node.
- The structure of a node: struct node { int data; node* next;};
- To create and adding a value linked list: n = new node; n->data=1; h = n; t = n;(first member in the list) n = new node; n->data=2; t->next=n;t=t->next; (second member) n=new node; n->data=3;  n->next=NULL; t->next=n;
### Reversing a linked list
- Reversing a linked list means changing the direction of the pointers so that the head points to the last node and each subsequent node points to the previous one.
- Steps to Reverse a Linked List
- To reverse the list,you need to:
- Traverse the list
- At each step,reverse the next pointer so that it points to the previous node.
- Pseudocode Explanation
- You will need three pointers:
- prev- Initially set to NULL, current - Starts at the head of the list, next - Used to temporarily store the next node before changing the pointers.
- Here’s the step-by-step process:
- Start with prev = NULL, current = head, and next = NULL.
- While current is not NULL:
- Store the next node (next = current->next).
- Reverse the pointer (current->next = prev).
- Move the prev pointer one step forward (prev = current).
- Move the current pointer one step forward (current = next).
- When current becomes NULL, prev will be pointing to the new head (the last node).

## Stack and Queues
- Both Linear data structures used to store and manage collections of elements but use different principles for accessing and removing elements.
### Stack
- Operates on LIFO(Last In First Out)principle, the last element to be added is the first to be removed.
- Operations :
- Push()-Add an element at the top of the stack
- Pop()-Remove the element from the top of the stack
- Peek() -View the top element without removing it
- Applications of stack:
- Undo/Redo functionality:
- Many software applications, like word processors and graphic editors, use stacks to implement undo and redo operations. Every action is pushed onto a stack, and when undo is triggered, the last action is popped off.
- Function Call Management:
- When a function is called, its execution context (parameters, local variables, return address) is pushed onto the call stack. When the function finishes, this data is popped off the stack.This is how most programming languages handle recursion and nested function calls.
- Syntax Parsing:
- Compilers use stacks to help with parsing and validating syntax, such as matching parentheses, curly braces, or tags in programming languages or markup languages.
#### Array implementation of a stack
- Insertions and deletions are allowed only at the top of the stack.
- In an array we can insert at any position and also delete at any position
- But in this case we want the array to behave like a stack, so we use a variable top that keeps track of the last inserted element / the top most element in an array.
- Assumption is that we are given the capacity of an array.
- In order to indicate that the stack is empty we store -1 at the top variable.
- We can then increment top by 1 variable then add a new element at the index/position 0.
- When the stack is full  there is not enough space to add an element. This state is called overflow state and the elemet cant be pushed.
- To perform deletion: The element at the position of top is deleted then the top is decremented by 1.
- pop() deletes the top most element of the stack and returns that element.
  
### Queues
- Operates on FIFO(First In First Out)principle. E.g a line at a checkout counter; the first person in line is the first one to be served
- Operations:
- Enqueue:Add an element to the back of the queue.
- Dequeue:Remove the element from the front of the queue.
- Peek/Front: View the element at the front of the queue without removing it
- Aplications:
- Task Scheduling:
- Operating systems use queues to manage tasks waiting to be executed. Tasks are enqueued when submitted and dequeued when it's their turn to be executed. Examples include job scheduling or printer task management.
- Handling Requests in Servers:
- Web servers, routers, and load balancers use queues to manage incoming requests. Requests are processed in the order they arrive (FIFO). This ensures fairness in handling tasks like serving web pages or routing network packets.
- Simulation Systems:
- Queues are used in simulation systems (e.g., simulating customer service lines or traffic flow), where entities wait in line to be processed or served, mimicking real-world scenarios like airport queues or call center operations.

#### FizzBuzz Interview Question
- write a program which prints fizz if a number is divisible by 3, Buzz when a number is divisible by 5, FizzBuzz if it is divisible by both 3 abd 5 and to print the number if it does not meet any of these conditions.
- This condition 9if(i % 3 == 0 && i % 5 == 0){cout << "fizzBuzz" << endl; })should always come first otherwise it will not be achieved.

#### Power of Two Interview Question
- The most common way to check if a number n is a power of two is using the expression n & (n - 1)..
- Here’s how it works:
- For a number n that is a power of two, n has a single 1 bit in its binary form.
- Subtracting 1 from n flips all the bits after the single 1 bit in n:
- For example, if 𝑛=8n=8 (binary 1000), 𝑛−1=7n−1=7 (binary 0111).
- When you perform n & (n - 1), the result is zero if n has only one 1 bit:8&7=1000&0111=00008&7=1000&0111=0000
- Thus, the condition (n & (n - 1)) == 0 is only true for powers of two.
- The n & (n - 1) method is widely considered the best approach for several reasons:
- Efficiency: The bitwise & operation is extremely fast and operates in constant time, 𝑂(1)O(1), making it highly efficient.
- Minimal Computation: This method only requires one subtraction and one & operation, which is computationally cheap.
- Clarity: The expression n & (n - 1) is a clear, concise condition that directly checks for the binary structure of powers of two without needing loops or more complex logic.
- Avoids Overflow: Other methods, like iterative multiplication, can lead to overflow for large numbers, whereas this method works reliably within the range of integer representation.

## Recursion
- A function that calls itself.
- Utilizes callstack to perform its operation.
- The function can call itself infinite number of time.
- To prevent this we should declare a base case which in which when attained the function stops.
- We also have a recursive part whereby the code keeps executing as long as the base case is not reached.

### Palindrome Number 
- Given an integer x, return true if x is a palindrome, and false otherwise.
- First we have to initiate two variables one to hold the original number (Will be same to the number passed to the function but cannot be manipulated only to be used to compare with the reversed number) and another variable to store the reversed string.
- We are the going to initiate a loop that checks if the number is greater than 0. If so we are going to extract the last digit and store it in a variable digit.
- We are then going to calculate the reversed number by multiplying by 10 and adding the digit.
- After the loop has been executed we can then compare the reversed string with the original string.

## Binary search
- Works using divide and conquor strategy

## Linked List Cycle
- Linked List Cycle involves detecting whether a linked list contains a cycle. A cycle exists if a node in the list points back to a previous node, forming a loop. This can be solved using Floyd’s Cycle Detection Algorithm, also known as the Tortoise and Hare algorithm.
- Tortoise and Hare algorithm. Floyd's tortoise and hare algorithm moves two pointers at different speeds through the sequence of values until they both point to equal values.
- Approach: Floyd's Cycle Detection Algorithm
- Two Pointers: Use two pointers (slow and fast):
- slow moves one step at a time.
- fast moves two steps at a time.
- Cycle Detection Logic:
- If there is a cycle, slow and fast will eventually meet because the fast pointer will "lap" the slow pointer within the cycle.
- If there is no cycle, the fast pointer will reach the end of the list (null).
- Time Complexity: 𝑂(𝑛). O(n) because both pointers traverse the list at most once.
- Space Complexity: 𝑂(1). O(1) because no additional data structures are used
## Reverse Linked List II
- Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.
- Input is a singly linked list, and two integers left and right.The task is to reverse the nodes from position left to position right (1-based indexing).
- Traverse the list until the node before the left position.Reverse the portion of the list between left and right.Connect the reversed sublist back to the rest of the list.
## Big O notation 
- To measure order of growths in terms of input size.
- Simplified analysis of an algorithm.
- Its machine independent.
- Time Complexity: The time complexity of an algorithm quantifies the amount of time taken by an algorithm to run as a function of the length of
the input.
- The time required by the algorithm to solve given problem is called time complexity  of the algorithm.

 # Search algorithms
 ## Linear Search
 - A linear search is a straightforward search algorithm where each element of a list or array is checked one by one until the desired element is found or the end of the list is reached. It works for both unsorted and sorted data.

### Steps:
  - Start from the first element of the list.
  - Compare the current element with the target.
  - If the current element matches the target, return its index.
  - If the end of the list is reached without a match, return an indicator that the element is not found (e.g., -1 or None).
### Properties:
  - Time Complexity: 𝑂(𝑛)O(n), where 𝑛 n is the number of elements in the list.
  - Space Complexity: 𝑂(1) O(1), as it requires no extra space.
  - Best Case: 𝑂(1) O(1), if the target element is the first element.
  - Worst Case: 𝑂(𝑛) O(n), if the target element is the last element or not in the list.
## Binary Search
- A binary search is a more efficient algorithm that works on sorted data by repeatedly dividing the search range in half.
### Steps:
  - Begin with the entire sorted list or array.
  - Check the middle element:
  - If it matches the target, return its index.
  - If the target is smaller, search the left half.
  - If the target is larger, search the right half.
  - Repeat this process on the selected half until the target is found or the range is empty.
### Properties:
  - Time Complexity: 𝑂(log 𝑛) O(logn), due to the halving of the search space.
  - Space Complexity: 𝑂(1) O(1) for iterative implementation or 𝑂(log 𝑛) O(logn) for recursive implementation (due to recursion stack).
  - Best Case: 𝑂(1) O(1), if the middle element is the target.
  - Worst Case: 𝑂(log 𝑛) O(logn), if the search continues to the last division.
# Sorting Algorithms
## Selection sort
A variable keeps track of the index of the minimum value in the array. This min starts off as the first array element and whenever a new minimum is found while parsing the array, the index of the minimum var is updated. On reaching the end of the array, the minimum one is swapped with the first element in the array. Then the cycle continues this time starting at the second array element. 

## Insertion Sort
Divides the array into 2 parts - the sorted and the unsorted - then loops over the unsorted section and picks each element placing it in its correct position in the sorted part of the array. It therefore starts by taking the second element and compares it with the one before and insert where necessary then moves on to the next element. This is repeated until the array is sorted. This algorithm is best in cases of online algorithms where there are new incoming values that were unknown of when the sorting began. They can just be inserted where needed.

## Bubble Sort
Works by swapping adjacent digits if the left is greater than the right. In the first round, the largest digit is taken to the end. The algorithm repeats this until the entire array is sorted or no swaps are made if that is being checked
The largest element will be pushed to the furthest end after each pass.

## Merge Sort
The concept is that an array of 0 or 1 element is already sorted. This therefore decomposes an array to smaller arrays of length 0 or 1 the merge them to form a new sorted array. Recursion is of most importance in this. The code flow has the recursive part and the merging function. An array is split into left and right at the middle recursively into arrays of 1s and 0s then merged recursively again.

Its Big O is O(n log n). log n is from decomposition, i.e, decomposing an array of 8 elements to will take 3 steps, 16 will take 4 steps and so on. Therefore 2 ^ 4 = 16 (log base 2 of 16 is 4). As for the n, in the merging function, comparison is approximately once for every item in both of the arrays being merged. Space complexity is at O(n) - space to store the small arrays increases as the length of the array increases.
## Quick Sort
Start by picking a pivot - doesn't matter its location - so just go with the first array element. Then go through the entire array keeping track of how many elements are smaller than this pivot. These when encountered are brought to the immediate right of the pivot. On reaching the end of the array, and having a variable holding the number of elements smaller than the pivot, the pivot is swapped that number of places such that it is in its correct position even after sorting - All smaller values are to its left. Another pivot is choses but this time to the left of the last pivot so the left is sorted then move to the right..


The Big O is O(n log n) but can got to worst case of O(n^2) when the pivot is the minimum or maximum value each time. This can be avoided by not picking the first or last element as pivot and try to pick the middle or just a random one. Space complexity is O(log n).

# Trees
Tree data structure is a hierarchical structure that is used to represent and organize data in the form of parent child relationship.
The topmost node of the tree is called the root, and the nodes below it are called the child nodes. Each node can have multiple child nodes, and these child nodes can also have their own child nodes, forming a recursive structure.



