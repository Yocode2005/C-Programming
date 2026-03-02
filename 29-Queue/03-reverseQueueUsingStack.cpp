#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int> q){
   int n = q.size();
   for(int i = 0;i<n;i++){
    int x = q.front();
    cout<<q.front()<<" ";
    q.pop();
     q.push(x);
   }
  cout<<endl;
}
void reverse(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q); // 10 20 30 40 50
    reverse(q);
    display(q); // 50 40 30 20 10
      
}