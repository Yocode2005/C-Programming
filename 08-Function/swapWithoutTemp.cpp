// swap the numbers without using extra variable temp
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<a<<" "<<b;
}