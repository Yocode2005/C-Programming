// pass by value: simply value of argumentor copies for argument are passed
//pass by reference value : address of argument are passed

#include<iostream>
using namespace std;
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    int a  = 8,b = 6 ;
    swap(&a,&b); // pass by reference
    cout<<a<<" "<<b;
}
