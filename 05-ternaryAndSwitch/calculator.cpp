#include<iostream>
using namespace std;
int main(){
    int a ,b;
    char op;
    cout<<"enter the problem : ";
    cin>>a>>op>>b;
    // if(op=='+') cout<<a+b;
    // if(op=='-') cout<<a-b;
    // if(op=='*') cout<<a*b;
    // if(op=='/') cout<<a/b;
    switch(op){
        case '+' : // case ke aage operation ki value likhni hai
        cout<<a+b;
        break;
        case '-' :
        cout<<a-b;
        break;
        case '*' :
        cout<<a*b;
        break;
        case '/' :
        cout<<a/b;
        break;
    }
}