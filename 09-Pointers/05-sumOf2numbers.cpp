#include<iostream>
using namespace std;
int main(){
    // int x,y;
    // cout<<"enter the number";
    // cin>>x>>y;
    // int *ptr = &x;
    // int *str = &y;
     
    // cout<<"sum of numbers is "<<*ptr + *str <<endl;
    int x,y;
    int *p1 = &x;
    int *p2 = &y;
    cout<<"enter first number : ";
    cin>>*p1;
    cout<<"enter the second number : ";
    cin>>*p2;
    cout<<*p1 + *p2;
}