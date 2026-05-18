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
void display(Node* head){ // for printing the linked list
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
// for size of linked list
int size(Node* head){
   Node* temp = head;
   int n = 0;
   while(temp!=NULL){
      n++;
      temp = temp->next;
   }
   return n;
}
int main(){
   Node* a = new Node(10);
   Node* b = new Node(20);
   Node* c = new Node(30);
   Node* d = new Node(40);
   a->next = b;
   b->next = c;
   c->next = d;
   cout<<a->next->next->next->val<<endl; // to print the value of d with the help of a

   // Node* temp = a;
   // while(temp!=NULL){
   //      cout<<temp->val<<" ";
   //      temp = temp->next;
   // }

   display(a);
   cout<<endl;
   cout<<"size of linked list is "<<size(a)<<endl;
}