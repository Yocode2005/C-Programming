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
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // formation of linkedlist
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;
    // cout<<(a.next)->val<<endl; // to print the value of b with thw help of a
    // cout<<((a.next)->next)->val<<endl; // to print the value of c with the help of a

    Node temp = a;
    while(temp.next!=NULL){
        cout<<temp.val<<" ";
        if(temp.next == NULL) break;
        temp = *(temp.next);
    }
}