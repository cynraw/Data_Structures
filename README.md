# Data_Structures
Deepening my knowledge in data structure while participating in GOL clinics.

## Linked lists
- Is a linear data structure to store data in uncontagious memory locations.
- 3 types of linked lists Singly linked lists, doubly linked lists and circular linked lists.
- Collection of nodes that contain two members, one data item and a pointer to the next node (in singly linked lists)
- Doubly linked list have another member which is a pointer that ppoints to the previous node.
- The structure of a node: struct node { int data; node* next;};
- To create and adding a value linked list: n = new node; n->data=1; h = n; t = n;(first member in the list) n = new node; n->data=2; t->next=n;t=t->next;(second member) n=new node; n->data=3;  n->next=NULL; t->next=n;
