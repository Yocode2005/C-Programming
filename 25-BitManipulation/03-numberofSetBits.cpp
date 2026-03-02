#include<iostream>
using namespace std;
int count_set_bits(int n){
    return __builtin_popcount(n); // builtin function to count the number of set bits in a number, it is a part of GCC compiler, it is very efficient and works in O(1) time complexity
}
int main(){
    cout<<count_set_bits(13)<<endl; //13 in binary is 1101, so there are 3 set bits(kiti baar 1 aata hai) in 13
    return 0;
}