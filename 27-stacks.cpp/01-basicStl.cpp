#include<iostream>
#include<stack> 
using namespace std;
int main(){
    stack<int> s;
    cout<<s.size()<<endl; // 0
    s.push(5);
    s.push(2);
    s.push(8);
    s.push(1);
    cout<<s.size()<<endl; // 4
    s.pop();  // 1 nikl jay ga
    cout<<s.size()<<endl; // 3
    cout<<s.top()<<endl; // ab topmost element 8 hai vo print hoga

    // // for printing all the elements in stack, we can use a loop 
    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    //but now stack is completley empty


    // printing using extra stack
    stack<int> temp;
    while(!s.empty()){
        cout<<s.top()<<" "; // 8,2,5 s ke top to bottom print krega
        temp.push(s.top()); // dusre stack me data
        s.pop(); // or phle wale se delete kiya
    }
    cout<<endl;

    // while(!temp.empty()){ // dusre stack ko print krene ke liye
    //     cout<<temp.top()<<" "; // 5,2,8 // temp ke top to bottom print krega // ya fir s ke bottom to top print krega
    //     temp.pop();
    // }

    // putting elemets back from temp to st
    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }
    // elemets print bhi ho gye or phle wala stack khali bhi nhi hua
    // algo : s se nikala temp me dala fir print kiya vaps temp se nikala or s me dala

}