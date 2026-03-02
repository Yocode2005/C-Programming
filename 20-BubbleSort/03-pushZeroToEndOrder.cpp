// push all the zeroes to end without distubing the relative order of other element
// example : 5,0,1,2,0,0,4,0,3
// output: 5,1,2,4,3,0,0,0,0


#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {5,0,1,2,0,0,4,0,3};
    int n = 9;
    //for printing the array
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        // bubble sort optimization
     for(int i = 0;i<n-1;i++){
        // traverse
        bool flag = true;
        for(int j = 0 ;j<n-1-i;j++){
            if(arr[j] == 0){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag == true){ // swap didn't hapeen
            break;
        }
    }
    cout<<endl;
    // for printing the sorted array
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}