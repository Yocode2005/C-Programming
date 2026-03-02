#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    //n n-1 n-2 ........3 2 1
    // by using decrement operator
    for(int i=n;i>=1;i--){
        cout<<i<<endl;
    } 
}