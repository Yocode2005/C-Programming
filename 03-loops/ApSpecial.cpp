#include<iostream>
using namespace std;
int main(){
    // 100,97,94........7,4,1 ->34 terms
    // method-1
    // int a = 100;
    // for(int i=1;i<=34;i++){
    //     cout<<a<<endl;
    //     a = a - 3;
    // }
    // method-2
    // int a = 100;
    // for(int i=1;a>0;i++){
    //     cout<<a<<endl;
    //     a = a - 3;
    // }
    // method-3
    // int a = 100;
    // for(;a>0;){
    //     cout<<a<<endl;
    //     a = a - 3;
    // }
    // methos-4
    for(int a = 100;a>0;a = a- 3){
        cout<<a<<endl;
    }
// sabhi code same work karenge
}