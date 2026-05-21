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
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node*a = new Node(10);
    Node*b = new Node(20);
    Node*c = new Node(30);
    Node*d = new Node(40);
    Node*e = new Node(50);
    // linking the nodes together to form a doubly linked list
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    // linking the previous pointers
    b->prev = a;
    c->prev = b;
    d->prev = c;
    e->prev = d;
    display(a);
}