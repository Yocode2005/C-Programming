#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    // formation of prefix sum array
    for(int i=1;i<n;i++){
        arr[i] = arr[i]+arr[i-1];
    }
    // check if any x  exists
    bool flag = false;
    int idx = -1; // for finding the index of x if it exists
    for(int i=1;i<n;i++){
        if(2*arr[i] == arr[n-1]){
            flag = true;
            idx = i;
            break;
        }
    }
    if(flag) cout<<"YES it can be partitioned after index "<<idx<<endl;
    else cout<<"NO it cannot be partitioned"<<endl;
}