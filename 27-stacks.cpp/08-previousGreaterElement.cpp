#include<iostream>
#include<Stack>
using namespace std;
int main(){
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // prev. greater element
    int prev[n];

   

    // optimal approch : using a stack : pop,ans,push & forward traverse
    stack<int> st;
    prev[0] = -1;
    st.push(arr[0]);
    for(int i = 1;i<=n-1;i++){
        // pop all ememnts smaller than arr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        // mark the ans in nge array
        if(st.size()==0) prev[i] = -1;
        else prev[i] = st.top();
        //push the arr[i]
        st.push(arr[i]);
    }
    for(int i = 0;i<n;i++){
        cout<<prev[i]<<" ";
    }
    cout<<endl;
}