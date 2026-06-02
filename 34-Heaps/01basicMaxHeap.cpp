#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> maxHeap; // in c++ by default it is max heap
    maxHeap.push(1);
    maxHeap.push(2);
    maxHeap.push(3);
    maxHeap.push(4);
    maxHeap.push(5);

    cout<<"size of heap is : "<<maxHeap.size()<<endl; // size of heap is : 5
    cout<<"top element is : "<<maxHeap.top()<<endl; // top element is : 5//  always return the maximum element in the heap
    maxHeap.pop(); // remove the top element from the heap
    cout<<"size of heap is : "<<maxHeap.size()<<endl; // size of heap is : 4
    cout<<"top element is : "<<maxHeap.top()<<endl; // top element is : 4
}
