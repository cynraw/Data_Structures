# Data Structures
Deepening my knowledge in data structure while participating in GOL clinics.

## Linked lists
- Is a linear data structure to store data in uncontagious memory locations.
- 3 types of linked lists Singly linked lists, doubly linked lists and circular linked lists.
- Collection of nodes that contain two members, one data item and a pointer to the next node (in singly linked lists)
- doubly linked list have another member which is a pointer that ppoints to the previous node.
- The structure of a node: struct node { int data; node* next;};
- To create and adding a value linked list: n = new node; n->data=1; h = n; t = n;(first member in the list) n = new node; n->data=2; t->next=n;t=t->next; (second member) n=new node; n->data=3;  n->next=NULL; t->next=n;
### Reversing a linked list
- Reversing a linked list means changing the direction of the pointers so that the head points to the last node and each subsequent node points to the previous one.
- Steps to Reverse a Linked List
- To reverse the list, you need to:
- Traverse the list.
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
- In an array we can insert at any position and also delete at any position.
- But in this case we want the array to behave like a stack, so we use a variable top that keeps track of the last inserted element / the top most element in an array.
- Assumption is that we are given the capacity of an array.
- In order to indicate that the stack is empty we store -1 at the top variable.
- We can then increment top by 1 variable then add a new element at the index/position 0.
- When the stack is full  there is not enough space to add an element. This state is called overflow state and the elemet cant be pushed.
- To perform deletion: The element at the position of top is deleted then the top is decremented by 1.
- pop() deletes the top most element of the stack and returns that element.
  
### Queues
- Operates on FIFO(First In First Out)principle. E.g a line at a checkout counter; the first person in line is the first one to be served.
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
- The most common way to check if a number n is a power of two is using the expression n & (n - 1).
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
- Works using divide and conquor strategy.
# LEET CODE PROBLEMS 
## Linked List Cycle
- Linked List Cycle involves detecting whether a linked list contains a cycle. A cycle exists if a node in the list points back to a previous node, forming a loop. This can be solved using Floyd’s Cycle Detection Algorithm, also known as the Tortoise and Hare algorithm.
- Tortoise and Hare algorithm. Floyd's tortoise and hare algorithm moves two pointers at different speeds through the sequence of values until they both point to equal values.
- 
