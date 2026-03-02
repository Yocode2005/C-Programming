#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(10); // 10
    dq.push_back(20); // 10 20
    dq.push_front(5); // 5 10 20
    dq.push_front(1); // 1 5 10 20
    cout<<"Front element: "<<dq.front()<<endl; // 1
    cout<<"Back element: "<<dq.back()<<endl; // 20
    cout<<"Size of deque: "<<dq.size()<<endl; // 4
    cout<<"Elements in deque: ";
    for(int i : dq){
        cout<<i<<" ";
    }
    cout<<endl;
    dq.pop_back(); // 1 5 10
    dq.pop_front(); // 5 10
    cout<<"Elements in deque after pop operations: ";
    for(int i : dq){
        cout<<i<<" ";
    }
    cout<<endl;
}
