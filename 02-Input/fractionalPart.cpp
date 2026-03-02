#include<iostream>
using namespace std;
int main(){
    float x;
    cin>>x;
    int y = (int)x;
    if(y<0) y = y-1; // agr nhi krte to negative ke liye glt ans. aata
    x = x-y;
    cout<<x;
}