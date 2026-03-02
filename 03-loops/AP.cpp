#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
     // by using formula of AP
    for(int i=1;i<=(2*n-1);i+=2){
         cout<<i<<endl;
     }
    // by introducing extra variable
    // int a = 4;
    // for(int i=1;i<=n;i++){
    //     cout<<a<<endl;
    //     a = a+2;
    // }
}