#include<iostream>
#include<climits>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){ // constructor
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void displayTree(Node* root){
    if(root  == NULL) return;
    cout<<root->val<<' ';
    displayTree(root->left);
    displayTree(root->right);
}
// for the sum of the tree
int sum(Node* root){
    if(root == NULL) return 0;
    int leftSum = sum(root->left);
    int rightSum = sum(root->right);
    int ans = root->val + leftSum + rightSum;
    return ans;
}
// for the size of the tree
int treeSize(Node* root){
    if(root == NULL) return 0;
    int leftTreeSize = treeSize(root->left);
    int rightTreeSize = treeSize(root->right);
    int totalTreeSize = 1 + leftTreeSize + rightTreeSize;
    return totalTreeSize;
}
// for finding the node with max value
int maxNode(Node* root){
    if(root == NULL) return INT_MIN;
    int maxLeft = maxNode(root->left);
    int maxRight = maxNode(root->right);
    return max(root->val,max(maxLeft,maxRight));
}
// for finding the levels of the  tree ||  height = levels-1
int levels(Node* root){
    if(root == NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
} 
int main(){
    Node* a =new Node(1);
    Node* b = new Node(2);
     Node* c =new Node(3);
    Node* d = new Node(4);
     Node* e =new Node(5);
    Node* f = new Node(6);
     Node* g =new Node(7);
 // making the connection or buildind a tree
     a->left = b;
     a->right = c;
     b->left = d;
     b->right = e;
     c->left = f;
     c->right = g;
     displayTree(a);
     cout<<endl;
     cout<<sum(a);
     cout<<endl;
     cout<<treeSize(a)<<endl;
     cout<<maxNode(a)<<endl;
     cout<<levels(a)<<endl;
    
}