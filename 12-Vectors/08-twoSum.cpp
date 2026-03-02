// find the doublet in the array whose sum is equal to the given value x
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"enter the target number : ";
    cin>>x;
    vector<int>v;
    int n;
    cout<<"enter the size of an vector : ";
    cin>>n;
    // vector ke input ke liye
    for(int i = 0;i<n;i++){
        int y;
        cin>>y;
        v.push_back(y);
    }
    // vector ko print krane ke liye
    for(int i = 0;i<n;i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    // ATQ
    for (int i = 0; i <=v.size()-2; i++) // for 2nd large index : v.size()-2
    {
        for(int j = i+1;j<=v.size()-1;j++){
            if(v[i] + v[j] == x){
                cout<<"("<<i<<" ,"<<j<<")"<<endl;
            }
        }
    }
    

}