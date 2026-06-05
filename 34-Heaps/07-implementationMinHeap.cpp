#include<iostream>
using namespace std;
class MinHeap{
    public : 
    int arr[50];
    int idx ;
    MinHeap(){
        idx = 1;
    }
    int top(){
        return arr[1];
    }
    void push(int x){
        arr[idx] = x;
        int i = idx;
        while(i>1){
            int parent = i/2;
            if(arr[parent]>arr[i]){
                swap(arr[parent],arr[i]);
                i = parent;
            }
            else{
                break;
            }
        }
        idx++;
    }
    int size(){
        return idx-1;
    }
};
int main(){
    MinHeap pq;
    pq.push(10);
    pq.push(2);
    pq.push(14);
    pq.push(11);
    pq.push(1); 
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
}
