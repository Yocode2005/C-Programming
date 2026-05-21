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
int main(){

}