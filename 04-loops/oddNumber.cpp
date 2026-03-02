#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
        if(i%2==0) continue; // even number ko skip krne ke liye use kiya hai
        cout<<i<<endl;
        
    }
}