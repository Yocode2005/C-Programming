// find the Kth smallest element in an array
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[] = {7,10,4,3,20,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    priority_queue<int> maxHeap; // for smallest use maxHeap and for largest use minHeap
    for(int i=0;i<n;i++){
        maxHeap.push(arr[i]);
        if(maxHeap.size()>k){
            maxHeap.pop();
        }
    }
    cout<<"Kth smallest element is : "<<maxHeap.top()<<endl; // Kth smallest element is : 7

}