// find out the how many time array has been rotated
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {9,10,11,1,2,3,4,5,8 };
    int n = 9;
    int lo = 0;
    int hi = n-1;
    int ans  = INT16_MAX;
    int index = -1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
       if(arr[lo]<= arr[hi]){
        if(arr[lo]<ans){
            index = lo;
            ans = arr[lo];
        }
        break;
       }
       if(arr[lo]<=arr[mid]){
        if(arr[lo]<ans){
            index = lo;
            ans = arr[lo];
        }
        lo = mid+1;
       }
       else {
        hi = mid-1;
        if(arr[mid]<ans){
            index = mid;
            ans  = arr[mid];
        }
       }
            }
        cout<<index;
    
}