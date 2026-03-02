#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number : ";
    int n;
    cin>>n;
    if(n>=100 && n<=999){ //"&&" ka use  multiple condition ek sath run krne ke liye krte hai
        cout<<"three digit number";
    }
    else{
        cout<<"not a three digit number";
    }

}