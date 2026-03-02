#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.size()<<endl; //5
    cout<<q.front()<<endl; // 10
    q.pop(); // 10 ko remove kr dega
     cout<<q.size()<<endl; //4
    cout<<q.front()<<endl;
    cout<<q.back()<<endl; // 50
}