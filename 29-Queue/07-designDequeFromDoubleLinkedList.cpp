#include<iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class Deque{
    public:
    Node* head;
    Node* tail;
    int size;
    Deque(){
        head = tail = NULL;
        size = 0;
    }
    void push_back(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    void push_front(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            head->prev = temp;
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void pop_back(){
        if(size == 0){
            cout<<"Deque is Empty !"<<endl;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if(tail != NULL) tail->next = NULL; // agar tail null nahi hai to uska next null kar do
        else head = NULL; // agar tail null hai to head bhi null kar do
        size--;
        delete(temp);
    }
    void pop_front(){
        if(size == 0){
            cout<<"Deque is Empty !"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        if(head != NULL) head->prev = NULL; // agar head null nahi hai to uska prev null kar do
        else tail = NULL; // agar head null hai to tail bhi null kar do
        size--;
        delete(temp);
    }
    int front(){
         if(size == 0){
            cout<<"Deque is Empty !"<<endl;
            return -1;
        }
        return head->val;
    }
     int back(){
         if(size == 0){
            cout<<"Deque is Empty !"<<endl;
            return -1;
        }
        return tail->val;
    }
     int getSize(){
         return size;
     }
     bool empty(){
         return size == 0; // agar size 0 hai to true return karo warna false
     }
     void display(){
         Node* temp = head;
         while(temp != NULL){
             cout<<temp->val<<" ";
             temp = temp->next;
         }
         cout<<endl;

     }

};
int main(){
    Deque dq;
    dq.push_back(10); // 10
    dq.push_back(20); // 10 20
    dq.push_front(5); // 5 10 20
    dq.push_front(1); // 1 5 10 20
    dq.display(); // 1 5 10 20
    cout<<endl;
    cout<<"Front: "<<dq.front()<<endl; // Front: 1
    cout<<"Back: "<<dq.back()<<endl; // Back: 20
    cout<<"Size: "<<dq.getSize()<<endl; // Size: 4
    cout<<"Empty: "<<dq.empty()<<endl; // Empty: 0 (false)
    dq.pop_back(); // 1 5 10
    dq.pop_front(); // 5 10
    dq.display(); // 5 10
    cout<<endl;
    cout<<"Front: "<<dq.front()<<endl; // Front: 5
    cout<<"Back: "<<dq.back()<<endl; // Back: 10
    cout<<"Size: "<<dq.getSize()<<endl; // Size: 2
    cout<<"Empty: "<<dq.empty()<<endl; // Empty: 0 (false)
    return 0;
}