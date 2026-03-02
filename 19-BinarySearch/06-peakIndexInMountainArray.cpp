// using linera search
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,5,4,3,2,1,0};
//     int n = 9;
//     int idx = -1;
//     for(int i = 1;i<n-2;i++){
//         if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
//             idx = i;
//             break;
//         }
//     }
//     cout<< idx;
// }

// by using binary search
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,5,6,4,3,2,1,0};
    int n = 10;
    int lo = 1;
    int hi = n-2;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
        cout<< mid;
        break;
        }
        else if(arr[mid]>arr[mid+1]) hi = mid-1;
        else lo = mid + 1;
    }
    
}
