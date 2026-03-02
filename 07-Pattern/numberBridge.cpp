// 1234567
// 123 567
// 12   67
// 1     7
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows : ";
    cin>>n;
    // 2n-1 satrs
    for(int i=1;i<=2*n-1;i++){
        cout<<i;
    }
    cout<<endl;
    int m = n-1;
    int nsp = 1;// for number of spaces
    for(int i = 1;i<=m;i++){
        // numbers
        int a = 1;
        for(int j = 1;j<=m-i+1;j++){
            cout<<a;
            a++;
        }
        // spaces
        for(int k=1;k<=nsp;k++){
            cout<<" ";
            a++;
        }
        nsp +=2;
        // numbers
        for(int j = 1;j<=m-i+1;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}