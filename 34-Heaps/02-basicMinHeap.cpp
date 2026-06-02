#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int, vector<int>, greater<int>> minHeap; // in c++ by default it is max heap but we can make it min heap by using greater<int> as the third parameter
    minHeap.push(1);
    minHeap.push(2);
    minHeap.push(3);
    minHeap.push(4);
    minHeap.push(5);

    cout<<"size of heap is : "<<minHeap.size()<<endl; // size of heap is : 5
    cout<<"top element is : "<<minHeap.top()<<endl; // top element is : 1//  always return the minimum element in the heap
    minHeap.pop(); // remove the top element from the heap
    cout<<"size of heap is : "<<minHeap.size()<<endl; // size of heap is : 4
    cout<<"top element is : "<<minHeap.top()<<endl; // top element is : 2
}
