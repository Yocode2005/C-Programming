#include<iostream>
using namespace std;
int main(){
    int arr[] = {8,8,9,1,2,3,4,5,8 };
    int n = 9;
    int x = 2;
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid] == x){
            cout<< mid;
            break;
        }
        if(arr[lo] == arr[mid] && arr[mid] == arr[hi]){
                lo++;
                hi--;
                continue;
            }
        else{
            if(arr[lo]<=arr[mid]){ // left part sorted
                if(x>=arr[lo] && x<=arr[mid]){
                    hi = mid - 1;
                }
                else{
                    lo = mid + 1;
                }
            }
            else{ // right part sorted
                if(x>=arr[mid] && x<=arr[hi]){
                    lo = mid + 1;
                }
                else{
                    hi = mid - 1;
                }
            }
        }
    }
    return -1;
}