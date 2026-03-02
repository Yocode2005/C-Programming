#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.pop_back();  // last se ek km kr dega // 0 ht jay ga
    v.pop_back(); // last se ek or km kr dega // 9 ht jay ga
    // siz eupdate hota rhta hai pr capacity pr koi frk nhi pdta hai
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}