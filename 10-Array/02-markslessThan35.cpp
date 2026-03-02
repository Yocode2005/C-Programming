#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of students : ";
    cin>>n;
    int marks[n];
    cout<<"enter the marks : ";
    // taking input from the usser
    for(int i = 0;i<=n-1;i++){
        cin>>marks[i];
    }
    // for taking output
    for(int i = 0;i<=n-1;i++){
        if(marks[i]<35){
            cout<<"Roll number of failed student is "<<i<<endl;
        }
    }


}