#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {5,-4,0,3,26,1,99,-80};
    int n = 8;
    //for printing the array
    for(int element : arr){
        cout<<element<<" ";
    }
    // selection sort
    for(int i = 0;i<n-1;i++){
        int min = INT_MAX;
        int minIdx = -1;
        for(int j = i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                minIdx = j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
    cout<<endl;
    // for printing the sorted array
    for(int element : arr){
        cout<<element<<" ";
    }
}