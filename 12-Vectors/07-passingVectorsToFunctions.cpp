// vectors are pass by value
// each time you passed,new vector is created
// hm pass by reference bhi kr skte hai using &

#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>a){// a -> 6 1 9 0 6 
    a[0] = 7; // a -> 7 1 9 0 6
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    v.push_back(6);

    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    change(v);

    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}