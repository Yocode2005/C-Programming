//  febonacci series me hr term uski pichli do terms ka sum hoti hai
// ex- 1 2 3 5 8 13 21 34  55.....
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int a = 1, b = 1, sum = 0;
    for(int i=1;i<=n-2;i++){
        sum = a+b;
        a = b;
        b = sum; 
    }
    cout<<b;
}