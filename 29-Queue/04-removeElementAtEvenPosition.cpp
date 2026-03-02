// remove all the elements present at even position in the queue.consider 0-based indexing
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
void removeEven(queue<int> &q){
    int n = q.size();
    for(int i = 0;i<n;i++){
        // int x = q.front();
        // q.pop();
        // if(i%2==0){
        //     continue;
        // }
        // q.push(x);
        if(i%2 == 0) q.pop();
        else{
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
      q.push(60);
    display(q); // 10 20 30 40 50
    removeEven(q);
    display(q); // 50 40 30 20 10
      
}