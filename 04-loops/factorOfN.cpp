#include<iostream>
using namespace std;
int main(){
    // method 1st
    // int n;
    // cout<<"enter the number : ";
    // cin>>n;
    // int f = 1; // higest factor  ko store karvaunga f me
    // for(int i=1;i<n;i++){
    //     if(n%i==0) f = i;
    // }
    // cout<<f;
    // method 2nd
    int n;
    cout<<"enter the number : ";
    cin>>n;
    for(int i=n/2;i>=1;i--){
        if(n%i==0){
            cout<<i<<" ";
            break; // loop ko todne ke liye  use kiya hai
        }
    }

}