#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    // Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node(){
        int value = this->data;
        // memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtPosition(Node* &head, int position, int data){
    if(position == 0){
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int count = 0;

    while(count < position - 1 && temp != NULL){
        temp = temp->next;
        count++;
    }

    if(temp == NULL){
        cout << "Position is out of bounds" << endl;
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}