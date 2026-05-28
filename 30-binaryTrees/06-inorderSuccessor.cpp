#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){//constructor
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* construct(int arr[], int n){
   Node* root = new Node(arr[0]);
   for(int i=1; i<n; i++){
       Node* temp = root;
       while(true){
           if(arr[i] < temp->val){
               if(temp->left == NULL){
                   temp->left = new Node(arr[i]);
                   break;
               }
               else temp = temp->left;
           }
           else{
               if(temp->right == NULL){
                   temp->right = new Node(arr[i]);
                   break;
               }
               else temp = temp->right;
           }
       }
   }
   return root;
}
Node* find(Node* root, int val){
    if(root == NULL) return NULL;
    if(root->val == val) return root;
    if(val < root->val) return find(root->left, val);
    else return find(root->right, val);
}
Node* inorderSuccessor(Node* root, Node* target){
    Node* successor = NULL;
    while(root!=NULL){
        if(target->val < root->val){
            successor = root;
            root = root->left;
        }
        else root = root->right;
    }
    return successor;
}
int main(){
    int arr[] = {5,3,6,2,4};
    Node* root = construct(arr, 5);
    Node* target = find(root, 3);
    Node* successor = inorderSuccessor(root, target);
    if(successor!=NULL) cout<<successor->val;
    else cout<<"No successor";
}
