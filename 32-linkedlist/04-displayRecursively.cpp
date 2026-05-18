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

void displayrecursively(Node* head){ // for printing the linked list
    if(head == NULL) return; // base case
    cout<<head->val<<" ";
    displayrecursively(head->next); // recursive call for the next node
};
int main(){
   Node* a = new Node(10);
   Node* b = new Node(20);
   Node* c = new Node(30);
   Node* d = new Node(40);
   a->next = b;
   b->next = c;
   c->next = d;
   displayrecursively(a);
}