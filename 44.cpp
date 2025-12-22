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

void deleteNode(Node* &head, int position, Node* &tail){

    //deleting first or start node
    if(position == 1){

        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }else{

        Node* curr = head;
        Node* prev = NULL;
        int count = 1;

        while(count < position){
            prev = curr;
            curr = curr->next;
            count++;
        }

        if(curr->next == NULL){
            tail = prev;
        }

        if(curr == NULL){
            cout << "Position is out of bounds" << endl;
            return;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

int main(){

    Node* node1 = new Node(10);

    Node* head  = node1;
    Node* tail = node1;
    print(head);

    insertAtTail(tail, 20);
    print(head);

    insertAtPosition(head, 1, 15);
    print(head);

    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;

    deleteNode(head, 3, tail);
    print(tail);
    print(head);
}