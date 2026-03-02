#include<iostream>
using namespace std;
int main() { 
int n; 
cout<<"enter the numebr of lines : ";
cin >> n; 
char ch =  'A';
for(int i=1;i<=n;i++){
    for(int j =1;j<=i;j++){
        cout<<j;
    }
    cout<<endl;
    for(int j =65;j<=(i+65);j++){
        cout<<char(j);
    }
    cout<<endl;
}
}