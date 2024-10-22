# Data_Structures
Deepening my knowledge in data structure while participating in GOL clinics.

## Linked lists
- Is a linear data structure to store data in uncontagious memory locations.
- 3 types of linked lists Singly linked lists, doubly linked lists and circular linked lists.
- Collection of nodes that contain two members, one data item and a pointer to the next node (in singly linked lists)
- Doubly linked list have another member which is a pointer that ppoints to the previous node.
- The structure of a node: struct node { int data; node* next;};
- To create and adding a value linked list: n = new node; n->data=1; h = n; t = n;(first member in the list) n = new node; n->data=2; t->next=n;t=t->next;(second member) n=new node; n->data=3;  n->next=NULL; t->next=n;

## Stack and Queues
- Both Linear data structures used to store and manage collections of elements but use different principles for accessing and removing elements.
### Stack
- Operates on LIFO(Last In First Out) principle, the last element to be added is the first to be removed.
- Operations :
- Push() - Add an element at the top of the stack
- Pop() - Remove the element from the top of the stack
- Peek() - View the top element without removing it
- Applications of stack:
- Undo/Redo functionality:
- Many software applications, like word processors and graphic editors, use stacks to implement undo and redo operations. Every action is pushed onto a stack, and when undo is triggered, the last action is popped off.
- Function Call Management:
- When a function is called, its execution context (parameters, local variables, return address) is pushed onto the call stack. When the function finishes, this data is popped off the stack. This is how most programming languages handle recursion and nested function calls.
- Syntax Parsing:
- Compilers use stacks to help with parsing and validating syntax, such as matching parentheses, curly braces, or tags in programming languages or markup languages.
