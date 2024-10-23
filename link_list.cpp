#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void create_node(Node *&head, int value){
    //creating a new node
    Node *newnode = new Node();
    newnode->data = value;
    newnode->next = nullptr;

    // Check if the list is empty
    if(head == nullptr){
        head = newnode;
    }
    else{
        Node *current = head;
        while(current->next != nullptr){
            current = current->next;
        }
        current->next = newnode;
    }
}

void printList(Node *&head){
    Node *current = head;
    while(current != nullptr){
        cout << current->data << "->";
        current = current->next;
    }
    cout << "NULL";
}

int main(){
    Node *head = nullptr;

    create_node(head, 10);
    create_node(head,12);
    create_node(head, 14);

    printList(head);
    return 0;
}