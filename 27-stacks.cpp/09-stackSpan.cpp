#include<iostream>
#include<Stack>
using namespace std;
int main(){
    int arr[] = {100,80,60,81,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // prev. greater element index array
    int prevIdx[n];

   

    // optimal approch : using a stack : pop,ans,push & forward traverse
    stack<int> st;
    prevIdx[0] = -1;
    st.push(0);
    for(int i = 1;i<=n-1;i++){
        // pop all ememnts smaller than arr[i]
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        // mark the ans in nge array
        if(st.size()==0) prevIdx[i] = -1;
        else prevIdx[i] = st.top();
        //push the arr[i]
        st.push(i);
    }
    for(int i = 0;i<n;i++){
        cout<<prevIdx[i]<<" ";
    }
    cout<<endl;
    // for span 
     for(int i = 0;i<n;i++){
        prevIdx[i] = i-prevIdx[i];
        cout<<prevIdx[i]<<" ";
    }
    cout<<endl;
}