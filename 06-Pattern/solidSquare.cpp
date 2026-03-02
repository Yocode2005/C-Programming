#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        // jb bhi ek loop ke andr dusra loop use kre to dono loop ke itrrater diff. hone chaiye 
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}