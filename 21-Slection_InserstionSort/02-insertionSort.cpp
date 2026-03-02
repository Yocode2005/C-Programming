#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,-4,0,3,26,1,99,-80};
    int n = 8;
    //for printing the array
    for(int element : arr){
        cout<<element<<" ";
    }
    // insertion sort
    for(int i = 1;i<n;i++){
        int j = i;
        // while(j>=1 ){
        //     if(arr[j]>=arr[j-1]) break;
        //     else{
        //         swap(arr[j],arr[j-1]);
        //     }
        //     j--;
        // }    

        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout<<endl;
    // for printing the sorted array
    for(int element : arr){
        cout<<element<<" ";
    }
}