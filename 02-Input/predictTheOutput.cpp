#include<iostream>
using namespace std;
int main(){
    // bool p = false;
    // bool q = false;
    // bool r = true;
    int p = 1;
    int q = 2;
    int r = 2;
    cout<<(p==q==r); // hamesa left to right jana hai(p==q)==(r) -> (0)==2 ->0
    //if we go right to left (p)==(q==r) -> (1)==(2==2) -> (1)==(1)
}