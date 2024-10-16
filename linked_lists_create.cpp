#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};
void printList(node* head)
{
    node* current = head;
        while(current !=NULL){
            cout << current -> data << "->";
            current = current->next;
        }
        cout<< "NULL";
}
int main(){
    
    node *n = NULL; // temporary pointer for creating new nodes
    node *t = NULL; // tail poniter
    node *h = NULL; // head pointer

    // creating a node and adding value
    n = new node;
    n->data = 1;
    n->next = NULL;
    h = n;
    t = n;

    n = new node;
    n->data = 2;
    n->next = NULL;
    t->next = n;
    t=n;

    n=new node;
    n->data = 3;
    n->next = NULL;
    t->next = n;
    t = n; 
    cout << "Linked list" << endl;
    printList(h);

    node *current = h;
    while(current != NULL){
        node *temp = current;
        current = current->next;
        delete temp;
    }

    return 0;   
}