#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

void printList(node* head) {
    node* current = head;
    while (current != nullptr) {
        cout << current->data << "->";
        current = current->next;
    }
    cout << "NULL" << endl;
}

// Function to create a new node
node* create_a_node(int value) {
    node* newnode = new node();
    newnode->data = value;
    newnode->next = nullptr;

    return newnode;
}

// Function to add a node at the end of the list
void addFromTail(node *&head, int value) {
    node *newnode = create_a_node(value);

    if (head == nullptr) {
        head = newnode;
        return;
    }

    node *current = head;
    // Traverse to the last node
    while (current->next != nullptr) {
        current = current->next;
    }

    // Link the new node to the last node
    current->next = newnode;
}

int main() {
    node *head = nullptr; // null pointer created

    // Adding nodes to the list
    head = create_a_node(10); // First node
    addFromTail(head, 11);    // Second node
    addFromTail(head, 12);    // Third node

    // Print the list
    printList(head);

    return 0;   
}
