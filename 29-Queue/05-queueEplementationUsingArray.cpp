// remove all the elements present at even position in the queue.consider 0-based indexing
#include<iostream>
#include<vector>
using namespace std;
class Queue{
public:
    int f,b;
    vector<int> arr;
    Queue( int size){
        f = 0;
        b = 0;
        vector<int> v(size);
        arr = v;
    }
    void push(int val){
        if(b == arr.size()){
            cout<<"Queue is full"<<endl;
            return;
        }
        arr[b] = val;
        b++;
    }
    void pop(){
        if(f-b == 0){ // size = 0
            cout<<"Queue is Empty !"<<endl;
            return;
        }
        f++;
    }
    int front(){
        if(f-b == 0){ // size = 0
            cout<<"Queue is Empty !"<<endl;
            return -1;
        }
        return arr[f];
    }
     int back(){
        if(f-b == 0){ // size = 0
            cout<<"Queue is Empty !"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return b-f;
    }
    bool empty(){
        if(f-b == 0) return true;
        else return false;
    }
    void display(){
        for(int i = f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
    Queue q(5);
    q.push(10); // 10
    q.push(20); // 10 20
    q.push(30); // 10 20 30
    q.push(40); // 10 20 30 40
   q.display(); // 10 20 30 40
   cout<<endl;
    q.push(50); // 10 20 30 40 50
    q.push(60); // error : queue is full
    q.display(); // 10 20 30 40 50
    cout<<endl;
    q.pop(); // 20 30 40 50
     q.display(); //20 30 40 50
     cout<<endl;
      
}