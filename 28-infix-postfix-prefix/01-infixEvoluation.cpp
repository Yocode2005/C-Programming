#include<iostream>
#include<Stack>
using namespace std;
int priority(char ch){
    if(ch == '+' || ch == '-') return 1;
    else return 2; // *,/
}
int solve(int val1,int val2,int ch){
    if(ch == '+') return val1+val2;
    else if(ch == '-') return val1-val2;
    else if(ch == '*') return val1*val2;
    else return val1/val2;
}
int main(){
    string s = "2+6*4/8-3";
    stack<int> val; // for values
    stack<char> op; // for operators
    for(int i = 0;i<s.length();i++){
        // check if s[i] ia an digit then push into the val stack
       // int ascii = (int)s[i];
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48);
        } 
        // if s[i] is operator
        else{ // if stack is empty or // priroity(st.top())<priority(s[i]) then push
            if(op.size() == 0 || priority(s[i])>priority(op.top())) op.push(s[i]);
             else{// priority(st.top())>priority(s[i]) to solve krenge
                while(op.size()>0 && priority(s[i]) <= priority(op.top())){
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1,val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
             }
        }
    } // agr bad me kuch bch jay to
    while(op.size()>0){
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1,val2, ch);
                    val.push(ans);
    }
    cout<<val.top();
}