#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class Queue{
    public:
    Node* head;
    Node* tail;
    int size;
    Queue(){
        head = tail = NULL;
        size = 0;
    }
    void push(int val){
        Node*temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void pop(){
        if(size == 0){
            cout<<"Queue is Empty !"<<endl;
            return;
        }
        Node* temp = head;
       head = head->next;
        size--;
        delete(temp); // jo waste memory hai usko free karna zaruri hai
    }
    int front(){
        if(size == 0){
            cout<<"Queue is Empty !"<<endl;
            return -1;
        }
        return head->val;
    }
    int back(){
        if(size == 0){
            cout<<"Queue is Empty !"<<endl;
            return -1;
        }
        return tail->val;
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    int getSize(){
        return size;
    }
    bool empty(){
        if(size == 0) return true;
        else return false;
    }
};
int main(){
    Queue q;
    q.push(10); // 10
    q.push(20); // 10 20
    q.push(30); // 10 20 30
    q.push(40); // 10 20 30 40
    q.push(50); // 10 20 30 40 50
    q.display();
    cout<<"Front : "<<q.front()<<endl; // Front : 10
    cout<<"Back : "<<q.back()<<endl; // Back : 50
    q.pop(); // 20 30 40 50
    q.pop(); // 30 40 50
    q.display();
    cout<<"Front : "<<q.front()<<endl; // Front : 30
    cout<<"Back : "<<q.back()<<endl; // Back : 50
}