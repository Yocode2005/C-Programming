// 3 pointer method or duth flag algorithm// sort the array of 0's and 1's. // leetcode-75
#include<iostream>
#include<vector>
using namespace std;
// one pass method : three pointer method  // duth flag algorithm
//1) mid ke bare me socho
//2) 0 to low-1 --> 0
//2) high+1 to end --> 2
//3) low to mid-1 --> 1
void method2(vector<int>&v){
    int n = v.size();
    int low = 0;
    int mid = 0;
    int high = n-1;
    while (mid<=high){
        if(v[mid] == 2){
            int temp = v[mid];
            v[mid] = v[high];
            v[high]  = temp;
            high--;
        }
        else if(v[mid]==0){
            int temp = v[mid];
            v[mid] = v[low];
            v[low] = temp;
            low++;
            mid++;
        }
        else mid++;
    }
    
}
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    cout<<endl;
    method2(v);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
}