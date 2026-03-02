#include<iostream>
using namespace std;
int main(){
    int n;cout<<"enter an number : ";
    cin>>n;
    if(n%5==0 && n%3==0){ //code jabhi chle ga jb dono condition ek sath true ho
        cout<<"the number is divisible by 5 and 3";
    }
    else{
        cout<<"the number is not divisible by 5 and 3";
    }
}