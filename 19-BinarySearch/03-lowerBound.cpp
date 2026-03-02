// given a sorted integer array amd am integer 'x', find lower bound of x.
// agr repetition hai to uska first occurence return krna hai
// lower bound :  smmalest index such that  arr[mid]>=target
// upper bound :  smallest index such that arr[mid]>target

// using binary search
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[9] = {1,2,4,5,9,18,21,24};
    int n = 9;
    int x = 12;
    int lo = 0;
    int hi = n-1;
    int ans = n;
//     while(lo<=hi){
//         int mid = lo + (hi-lo)/2;
//         if(arr[mid]>=x){
//             ans = arr[mid];
//             hi = mid-1; // look for more small index on left
//         }
//         else lo = mid + 1; // look for right
// }
// cout<<ans;

int index = lower_bound(arr, arr+n, x) - arr;
cout<<index<<endl;
cout<<arr[index];

 
}