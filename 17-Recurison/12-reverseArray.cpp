#include<iostream>
using namespace std;
int reverseArray(int arr[],int index,int size){
    if(index==size) return 0;
    reverseArray(arr,index+1,size);
    cout<<arr[index]<<" ";
}
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    // for input
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;

    // to print the array
    // for(int i = 0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    reverseArray(arr,0,n);
    return 0;
}