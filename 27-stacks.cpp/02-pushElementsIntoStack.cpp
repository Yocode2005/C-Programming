#include<iostream>
#include<stack> 
using namespace std;
void print(stack<int>& st){
    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    // putting elemets back fromm temp to st
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}

void pushAtBottom(stack<int>& st,int value){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(value);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}

void pushAtIdx(stack<int>& st,int idx ,int value){
    stack<int>temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(value);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}


int main(){
    stack<int>st;
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);
    print(st);// 50,60,70,80
    cout<<endl;
    pushAtBottom(st,100);
    print(st); // 100,50,60,70,80
    pushAtIdx(st,2,200);
    print(st); // 100,50,200,60,70,80
}