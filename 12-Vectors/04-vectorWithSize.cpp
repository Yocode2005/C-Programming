#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5); // having initial size = 5
    vector<int>t(7,4); // having initial size  = 7,each element having value  = 4
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    for(int i = 0;i<t.size();i++){
        cout<<t[i]<<" ";
    }
}