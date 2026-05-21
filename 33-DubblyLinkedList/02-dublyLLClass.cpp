#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev; // for doubly linked list we need a pointer to the previous node as well
    Node(int val){
        this->val = val;
        this->next  = NULL;
        this->prev = NULL; // initialize the prev pointer to NULL in the constructor
    }
};
class DLL{ // User defined data structure
public:
    Node* head ;
    Node* tail ;
    int size;
    DLL(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){ // for inserting at end of linked list
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }

     void insertAtHead(int val){ // for inserting at head of linked list
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }

     void insertAtIdx(int idx,int val){ // for inserting at a specific index
        if(idx<0 || idx>size){
            cout<<"Invalid index"<<endl;
            return;
        }
        if(idx == 0){
            insertAtHead(val);
            return;
        }
        if(idx == size){
            insertAtTail(val);
            return;
        }
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i = 1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t; 
            t->prev = temp;
            t->next->prev = t;   
            size++;
        }
    }

    int getAtIdx(int idx){ // for getting the value at a specific index
        if(idx<0 || idx>=size){
            cout<<"Invalid index"<<endl;
            return -1;
        }
        if(idx == 0) return head->val;
        if(idx == size-1) return tail->val;
        Node* temp = head;
        for(int i = 1;i<=idx;i++){
            temp = temp->next;
        }
        return temp->val;   
    }

    void deleteAtHead(){ // for deleting the head of linked list
        if(size == 0) return;
        head = head->next;
        size--;
    }

     void deleteAtTail(){ // for deleting the tail of linked list
        if(size == 0) return;
        if(size == 1){
            head = tail = NULL;
            size--;
            return;
        }
        Node* temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtIdx(int idx){ // for deleting at a specific index
        if(idx<0 || idx>=size){
            cout<<"Invalid index"<<endl;
            return;
        }
        if(idx == 0){
            deleteAtHead();
            return;
        }
        if(idx == size-1){
            deleteAtTail();
            return;
        }
        Node* temp = head;
        for(int i = 1;i<=idx-1;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        size--;
    }

    void display(){ // for displaying the linked list   
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;  
        }
        cout<<endl;
    }
};
int main(){
    DLL dl;
    dl.insertAtTail(10);
    dl.insertAtTail(20);
    dl.insertAtTail(30);
    dl.insertAtTail(40);
    dl.insertAtTail(50);
    dl.display();
    dl.insertAtHead(5);
    dl.display();
    dl.insertAtIdx(3, 25);
    dl.display();
    // cout<<"Value at index 3 is "<<dl.getAtIdx(3)<<endl;
    // dl.deleteAtHead();
    // dl.display();
    // dl.deleteAtTail();
    // dl.display();
    // dl.deleteAtIdx(2);
    // dl.display();
}