#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

bool isCBT(Node* root) {
    if (root == NULL) return true;

    queue<Node*> q;
    q.push(root);

    bool nullFound = false;

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            nullFound = true;
        }
        else {
            if (nullFound) return false;

            q.push(temp->left);
            q.push(temp->right);
        }
    }
    return true;
}

bool isMax(Node* root) {
    if (root == NULL) return true;

    if (root->left != NULL && root->val < root->left->val)
        return false;

    if (root->right != NULL && root->val < root->right->val)
        return false;

    return isMax(root->left) && isMax(root->right);
}

int main() {
    Node* a = new Node(20);
    Node* b = new Node(15);
    Node* c = new Node(10);
    Node* d = new Node(8);
    Node* e = new Node(11);
    Node* g = new Node(6);

    a->left = b;
    a->right = c;

    b->left = d;
    b->right = e;

    c->right = g;   // Not a complete binary tree

    if (isCBT(a) && isMax(a)) {
        cout << "Yes, tree is a Max Heap";
    }
    else {
        cout << "No, tree is not a Max Heap";
    }

    return 0;
}