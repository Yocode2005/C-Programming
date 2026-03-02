// remove consecutive duplicates from a string using stack
#include<iostream>
#include<stack>
using namespace std;
string removeDuplicates(string s){
    stack<char> st;
    st.push(s[0]);
    for(int i=1; i<s.size(); i++){
        if(s[i] != st.top()) st.push(s[i]);
    }
    s = "";
    while(st.size() > 0){
        s = st.top() + s;
        st.pop();
    }
    return s;
}
int main(){
    string s = "aaaaaabbbcccddeee";
    cout<<s<<endl;
    s = removeDuplicates(s);
    cout<<s<<endl;
}