// Squrt(x)  || leetcode 69
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int lo = 0;
    int hi = n;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(mid*mid == n) return mid;
        else if(mid*mid>n) hi = mid-1;
        else lo = mid+1;
    }
}