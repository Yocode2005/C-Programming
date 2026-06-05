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
    void pop(){
        idx--;
        arr[1] = arr[idx];
        int i = 1;
        while(true){
            int left = 2*i;
            int right = 2*i + 1;
            int smallest = i;
            if(left<idx && arr[left]<arr[smallest]){
                smallest = left;
            }
            if(right<idx && arr[right]<arr[smallest]){
                smallest = right;
            }
            if(smallest != i){
                swap(arr[i],arr[smallest]);
                i = smallest;
            }
            else{
                break;
            }
        }
    }
    int size(){
        return idx-1;
    }

    void display(){
        for(int i=1;i<idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    MinHeap pq;
    pq.push(10);
    pq.push(2);
    pq.push(14);
    pq.push(11);
    pq.push(1); 
    pq.display();
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.display();
}
