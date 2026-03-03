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
void preOrder(Node* root){ // preorder : root -> left -> right
    if(root  == NULL) return;
    cout<<root->val<<' '; // root
    preOrder(root->left); // left
    preOrder(root->right);// right
}

void inOrder(Node* root){ // inorder : left -> root -> right
    if(root  == NULL) return;
    inOrder(root->left); // left
    cout<<root->val<<' '; // root
    inOrder(root->right);// right
}

void postOrder(Node* root){ // postorder : left -> right -> root
    if(root  == NULL) return;
    postOrder(root->left); // left
    postOrder(root->right);// right
    cout<<root->val<<' '; // root
}
int levels(Node* root){
    if(root == NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}
void nthLevelOrder(Node* root, int currentLevel, int level){ 
    if(root  == NULL) return;
    if(currentLevel == level){
        cout<<root->val<<' ';
        return;
    }
    nthLevelOrder(root->left, currentLevel+1, level); 
    nthLevelOrder(root->right, currentLevel+1, level);
}
void levelOrder(Node* root){
    int n = levels(root); // number of levels in the tree
    for(int i=1; i<=n; i++){
        nthLevelOrder(root, 1, i);
        cout<<endl;
    }
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
     nthLevelOrder(a, 1, 3); // 4 5 6 7
        cout<<endl;
        levelOrder(a); // 1 \n 2 3 \n 4 5 6 7

} 