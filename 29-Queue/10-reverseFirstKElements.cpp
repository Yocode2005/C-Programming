#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverseFirstKElements(queue<int> &q, int k){
    if(q.empty() || k > q.size()) return;
    stack<int> s;
    // step 1: push first k elements into stack
    for(int i = 0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
    // step 2: enqueue back the elements from stack to queue
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    // step 3: move the remaining elements from front to back of the queue
    int t = q.size() - k; // remaining elements
    for(int i = 0;i<t;i++){
        q.push(q.front());
        q.pop();
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int k = 3;
    reverseFirstKElements(q,k);
    cout<<"Queue after reversing first "<<k<<" elements: ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
