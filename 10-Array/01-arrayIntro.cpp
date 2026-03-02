// array : collection of similar datatype at continoues memeory location

// declaration of array : 
// datatype array ka nam[array ka size];
#include<iostream>
using namespace std;
int main(){
    int arr[7]; // declaration of an array
    int arr1[4] = {1,2,3,4}; // intilization of an array
    int arr2[] = {2,3,4,5,6,7}; 
    // note : jb array ki size define nhi kr rhe tb aage ke elements dena jaruri hai
    cout<<arr1[2]<<endl; // 3
    cout<<arr2[5]<<endl; //7
    // to access all the elements of arr2
    for(int i = 0;i<=5;i++){
        cout<<arr2[i]<<" ";
    }

}