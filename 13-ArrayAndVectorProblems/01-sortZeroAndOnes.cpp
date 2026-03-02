// sort the array of 0's and 1's. // leetcode-75
#include<iostream>
#include<vector>
using namespace std;
void sort01 (vector<int>& v){ // ese do bar array me trevrse krna pdega
    int n = v.size();
    int numberOfZeros =  0;
    int numberOfOnes = 0;
    for(int i = 0;i<n;i++){
        if(v[i]==0) numberOfZeros++;
        else numberOfOnes++;
    }
    // filling elemnst
    for(int i = 0;i<n;i++){
        if(i<numberOfZeros) v[i] = 0;
        else v[i] = 1;
    }
}

// by second method : two pointer method  // ese ek bar hi treverse krna pdeg array me
void method2(vector<int>&v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(v[i] == 0) i++;
        if(v[j] ==1) j--;
        if(i>j) break;
        if(v[i] ==1 && v[j] ==0){
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
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
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort01(v);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    method2(v);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
}