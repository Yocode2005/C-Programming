#include<iostream>
using namespace std;
class Vector{
public:
    int size;
    int capacity;
    int* arr;
    Vector(){
        size = 0;
        capacity = 1;
        arr = new int[1];
    }
    void add(int ele){
        if(size == capacity){
            capacity *= 2;
            int *arr2 = new int[2*capacity];
            for(int i=0; i<size; i++){
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size] = ele;
        size++;
    }
    void print(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void get(int idx){
        if(idx < size){
            cout<<arr[idx]<<endl;
        }        else{
            cout<<"Index out of bounds"<<endl;
        }
    }
    void remove(){
        if(size > 0){
            size--;
        }
    }
};
int main(){
    Vector v1;
    v1.add(10);
    v1.print();
    v1.add(20);
    v1.print();
    v1.add(30);
    v1.print();
    v1.get(1);
    v1.get(5);
}