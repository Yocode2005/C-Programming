#include<iostream>
using namespace std;
void fun(int x, int y){
    cout<<"address of fun x is "<<&x<<endl;
    cout<<"address of fun y is "<<&y<<endl;
}
int main(){
    int x = 3;
    int y = 7;
    cout<<"address of main x is "<<&x<<endl;
    cout<<"address of main y  is "<<&y<<endl;
    fun(x,y);
}