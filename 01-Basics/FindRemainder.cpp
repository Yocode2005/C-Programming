#include<iostream>
using namespace std;
int main(){
    int a = 14; // a means dividend
    int b = 3; // b is divisor
    // int q = a/b; // q is quotient
    // int r = a - (b*q);
    int r = a % b; // remainder when a is dividend by b
    cout<<r;

}