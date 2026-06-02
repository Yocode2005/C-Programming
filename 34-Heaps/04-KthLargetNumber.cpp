// find the Kth largest element in an array
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[] = {7,10,4,3,20,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    priority_queue<int, vector<int>, greater<int>> minHeap; // for smallest use maxHeap and for largest use minHeap
    for(int i=0;i<n;i++){
        minHeap.push(arr[i]);
        if(minHeap.size()>k){
            minHeap.pop();
        }
    }
    cout<<"Kth largest element is : "<<minHeap.top()<<endl; // Kth largest element is : 10

}