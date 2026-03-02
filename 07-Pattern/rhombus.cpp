//     *****
//    *****
//   *****
//  *****
// *****
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        // for spaces
        for(int s = 1;s<=n-i;s++){
            cout<<" ";
        }
        // for stars
        for(int j= 1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}