#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the 1st side : ";
    cin>>a;
    cout<<"enter the 2nd side : ";
    cin>>b;
    cout<<"enter the 3rd side : ";
    cin>>c;
    if((a+b>c) && (b+c>a) && (c+a>b)){
        cout<<a<<","<<b<<","<<c<<"can be the sides of a triangle";
    }
    else{
        cout<<"invalid triangle";
    }
}