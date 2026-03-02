#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {8,8,9,1,2,3,4,5,8 };
    int n = 9;
    int lo = 0;
    int hi = n-1;
    int ans  = INT16_MAX;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[lo] <= arr[mid]){
            ans = min(ans,arr[lo]);
            lo = mid+1;
        }
        else{
            hi  = mid-1;
            ans = min(ans,arr[mid]);
        }
            }
        cout<<ans;
    
}