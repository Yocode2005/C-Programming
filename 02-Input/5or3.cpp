#include<iostream>
using namespace std;
int main(){
    cout<<"enter an integer : ";
    int n;
    cin>>n;
    if(n%5==0 || n%3==0){ //dono conditions me se koi ek bhi shi hogi to bhi chle ga
        cout<<"the number is divisible by 5 or 3";
    }
    else{
        cout<<"the number is not divisible by 5 and it is not divisible by 3";
    }
}