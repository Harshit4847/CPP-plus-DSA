#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;

    // Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
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

void insertAtHead(Node* &head, Node* &tail, int data){

    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = head;
        return;
    }else{
        Node* temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(Node* &tail, int data){

    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        return;
    }else{
        Node* temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;    
    }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data){
    // insert at start
    if(position == 1){
        insertAtHead(head, tail, data);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position - 1){
        temp = temp->next;
        cnt++;
    }

    // insert at last position
    if(temp->next == NULL){
        insertAtTail(tail, data);
        return;
    }

    // creating a node for data
    Node* nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(Node* &head, int position, Node* &tail){

    //deleting first or start node
    if(position == 1){

        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }else{

        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        // deleting last node
        if(curr->next == NULL){
            tail = prev;
            tail->next = NULL;
            curr->prev = NULL;
            delete curr;
            return;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next->prev = prev;
        curr->next = NULL;

        delete curr;
    }
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 5);
    print(head);

    insertAtTail(tail, 40);
    print(head);

    insertAtPosition(head, tail, 3, 15);
    print(head);

    deleteNode(head, 3, tail);
    print(head);
    print(tail);

    return 0;
    
}