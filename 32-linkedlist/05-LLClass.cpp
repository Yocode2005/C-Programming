#include<iostream>
using namespace std;
class Node{ // class
    public:
    int val;
     Node* next;
     Node(int val){ // constructor
        this->val = val;
        this->next = NULL;
     }
};
class LinkedList{ // User defined data structure
public:
    Node* head ;
    Node* tail ;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

     void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int idx,int val){
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
            size++;
        }
    }

    int getAtIdx(int idx){
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

    void deleteAtHead(){
        if(size == 0) return;
        head = head->next;
        size--;
    }

     void deleteAtTail(){
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

    void deleteAtIdx(int idx){
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

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;  
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll ;
    ll.insertAtTail(10);
    ll.display(); // 10
    ll.insertAtTail(20);
    ll.display(); // 10 20
    ll.insertAtHead(30);
    ll.insertAtHead(40);
    ll.insertAtHead(50);
    ll.display(); // 50 40 30 10 20
    ll.insertAtIdx(2, 100);
    ll.display(); // 50 40 100 30 10 20
    cout<<ll.getAtIdx(2)<<endl; // 100
    ll.deleteAtHead();
    ll.display();// 40 100 30 10 20
    ll.deleteAtTail();
    ll.display(); // 40 100 30 10
    ll.deleteAtIdx(2);
    ll.display(); // 40 100 10
}