// construct binary tree  level order traversal
#include<iostream>
#include<climits>
#include<queue>
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
   queue<Node*> q;
   Node* root = new Node(arr[0]);
    q.push(root);
    int  i = 1;
    int j = 2;
    while(q.size()>0 && i<n){
        Node* temp = q.front();
        q.pop();
       Node* leftNode;
       Node* rightNode;
       if(arr[i] != INT_MIN) {
           leftNode = new Node(arr[i]);
       }
       else leftNode = NULL;
       if(j!=n && arr[j] != INT_MIN) {
           rightNode = new Node(arr[j]);
       }
       else rightNode = NULL;


       temp->left = leftNode;
       temp->right = rightNode;


       if(leftNode!=NULL) q.push(leftNode);
       if(rightNode!=NULL) q.push(rightNode);


       i += 2;
       j += 2;
    }
    return root;
}
void levelOrderQueue(Node* root){ // level order traversal using queues || BFS
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<' ';
        if(temp->left!=NULL) q.push(temp->left);
         if(temp->right!=NULL) q.push(temp->right);
    }
    cout<<endl;
}
int main(){
    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr,n);
    levelOrderQueue(root);

} 