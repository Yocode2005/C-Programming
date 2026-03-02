#include<iostream>
#include<vector> // vectors ko use krne ke liye
using namespace std;
int main(){
    vector<int>v;// size dene ki need nhi hai

    // for inserting/input do not ue []
    v.push_back(6);
    //cout<<v.size()<<endl; // 1
    cout<<v.capacity()<<endl;  // 1
    v.push_back(1);
    //cout<<v.size()<<endl; // 2
    cout<<v.capacity()<<endl; //2
    v.push_back(9);
    //cout<<v.size()<<endl; // 3
    cout<<v.capacity()<<endl; // 4
    v.push_back(0);
   // cout<<v.size()<<endl; // 4
    cout<<v.capacity()<<endl; // 4

    // but for update/access you can use []
    v[0] = 88;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    
}