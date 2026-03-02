// print the pattern
// ex- ****
//     ****
//     ****
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"number of rows : ";
    cin>>n;
    int m;
    cout<<"number of columns :";
    cin>>m;
    for(int i=1;i<=n;i++){ // number of rows ke liye use kiya
        for(int j=1;j<=m;j++){// number of columns or number of stars ke liye use kiya
            cout<<"*";
        }
        cout<<endl;
    }
}