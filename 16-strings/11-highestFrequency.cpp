#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    
    string s = "leetcode";
    vector<int> arr(26,0);
    for(int i = 0;i<s.length();i++){ // for travel in string
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii-97]++;
    }
    int mx = 0;
    for(int i = 0;i<26;i++){ // for travel in vector
        if(arr[i]>mx) mx = arr[i];
    }

    for(int i = 0;i<26;i++){ 
        if(arr[i]==mx) {
            int ascii = i + 97;
            char ch = (char)ascii;
            cout<<ch<<" "<<mx<<endl;
        }
    }
}