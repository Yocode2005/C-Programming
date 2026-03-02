#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(2);
    s.insert(8);
    s.insert(1);
    for(int x : s){
        cout<<x<<" ";
       
    }
     cout<<endl;

    map<int,int> m;
    m[2] = 20;
    m[5] = 50;  
    m[1] = 10;
    m[8] = 80;
    for(auto x : m){
        cout<<x.first<<" "<<x.second<<endl;
        // sirf keys ko sort karta hai map, values ko nahi
    }
}