# Data_Structures
Deepening my knowledge in data structure while participating in GOL clinics.

## Linked lists
- Is a linear data structure to store data in uncontagious memory locations.
- 3 types of linked lists Singly linked lists, doubly linked lists and circular linked lists.
- Collection of nodes that contain two members, one data item and a pointer to the next node (in singly linked lists)
- Doubly linked list have another member which is a pointer that ppoints to the previous node.
- The structure of a node: struct node { int data; node* next;};
- To create and adding a value linked list: n = new node; n->data=1; h = n; t = n;(first member in the list) n = new node; n->data=2; t->next=n;t=t->next;(second member) n=new node; n->data=3;  n->next=NULL; t->next=n;
### Reversing a linked list
- Reversing a linked list means changing the direction of the pointers so that the head points to the last node and each subsequent node points to the previous one.
- Steps to Reverse a Linked List
- To reverse the list, you need to:
- Traverse the list.
- At each step,reverse the next pointer so that it points to the previous node.
- Pseudocode Explanation
- You’ll need three pointers:
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
- Operates on LIFO(Last In First Out) principle, the last element to be added is the first to be removed.
- Operations :
- Push()-Add an element at the top of the stack
- Pop()-Remove the element from the top of the stack
- Peek()- View the top element without removing it
- Applications of stack:
- Undo/Redo functionality:
- Many software applications, like word processors and graphic editors, use stacks to implement undo and redo operations. Every action is pushed onto a stack, and when undo is triggered, the last action is popped off.
- Function Call Management:
- When a function is called, its execution context (parameters, local variables, return address) is pushed onto the call stack. When the function finishes, this data is popped off the stack.This is how most programming languages handle recursion and nested function calls.
- Syntax Parsing:
- Compilers use stacks to help with parsing and validating syntax, such as matching parentheses, curly braces, or tags in programming languages or markup languages.
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
