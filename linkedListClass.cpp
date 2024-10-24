#include<iostream>
using namespace std;

// create a class for node 
class node{
    public:
        int data;
        node *next;
    // constructor for a node
    node(int value){
        data = value;
        next = nullptr;
    }
};

// Class for linked list
class linkedList{
    private:
        node *head;
    public:
    linkedList(){
        head = nullptr;
    }
    void createList(int value){
        node * newnode = new node(value);
        if(head == nullptr){
            head = newnode;
        }
        else{
            node *current = head;
            while(current->next != nullptr){
                current = current->next;
            }
            current->next = newnode;
        }
    }
    void printList(){
        node *current = head;
        while(current != nullptr){
            cout<< current->data << "->";
            current = current->next;
        }
        cout<<"nullptr";
    }
    ~linkedList(){
        node *current = head;
        while(current != nullptr){
            node *nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
};
int main(){
    linkedList list;

    list.createList(100);
    list.createList(200);
    list.createList(300);

    list.printList();
   return 0;
}

