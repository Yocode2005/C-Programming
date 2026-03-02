#include<iostream>
using namespace std;
void printNumber(int i ,int n){
    if(i>n) return ;
    cout<<i<<endl;
    printNumber(i+1,n);
    
}
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    cout<<endl;
    printNumber(1,n);
}