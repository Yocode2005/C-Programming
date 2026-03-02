#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    //gp : 2 6 18 54 .. .....
    // i ko sirf loop kitni bar chlega uske liye use krenge
    // new variable introduce krenge or usse hi print krvaynge
    int a = 2;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a = a*3;
    }
}