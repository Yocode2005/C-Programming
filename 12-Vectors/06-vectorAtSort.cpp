#include<iostream>
#include<vector>
#include<algorithm> // for using sort()
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    v.push_back(6);
    // index ki jga at se acess/update kr skte hai
    v.at(2) = 90;
    cout<<v.at(2)<<endl;
    

    for(int i = 0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    
    // sort() 
    sort(v.begin(),v.end());// this sort the vector in ascending order by default
    for(int i = 0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;


}