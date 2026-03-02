#include<iostream>
using namespace std;
void printNumber(int n){
    if(n==0) return ;
    cout<<n<<endl;
    printNumber(n-1);
    
    
}
int main(){
   printNumber(5);
   return 0;
}