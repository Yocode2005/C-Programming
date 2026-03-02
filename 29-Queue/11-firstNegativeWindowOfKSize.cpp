#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int arr[] ={3,-4,-7,30,7,-9,2,1,6,-1};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    queue<int> q;
    for(int i = 0;i<n;i++){
        if(arr[i] < 0) q.push(i);
    }
    for(int i = 0;i<=n-k;i++){
        while(!q.empty() && q.front() < i){
            q.pop();
        }
        if(q.empty()){
            ans.push_back(0);
        }else{
            ans.push_back(arr[q.front()]);
        }
    }
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}