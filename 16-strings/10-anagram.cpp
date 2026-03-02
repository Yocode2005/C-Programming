// anagram : mtlb jese abc se cba bnaya  ja skta hai to ye ek dusre ke anagram hue
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    
    string s = "physicswallah";
    string t = "phywallahsics";
     sort(s.begin(),s.end());
      sort(t.begin(),t.end());
    if(s==t) cout<<"yes"<<endl;
    else cout<<"No"<<endl;

}