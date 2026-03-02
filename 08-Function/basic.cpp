// synatax of function
// <void/int float> function ka nam(inta, int b,int c){
// function body
// }
#include<iostream>
using namespace std;
void startriangle(int x){ // x = argument
    for(int i =1;i<=x;i++){
        for(int j =1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    startriangle(3); // 3 star wala triangle
    startriangle(4); // 4 wala triangle
    startriangle(5);
    
}