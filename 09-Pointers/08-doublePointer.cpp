#include<iostream>
using namespace std;
int main(){
   int x = 5;
   int *ptr = &x;
   int **pptr = &ptr;
   cout<<x<<endl;
   cout<<ptr<<endl; // x ka address
   cout<<pptr<<endl; // ptr ka address
   cout<<*ptr<<endl; 
   cout<<*(*pptr)<<endl; 
   cout<<**pptr<<endl; // 5 
}