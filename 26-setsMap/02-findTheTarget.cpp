// unordered_set : used to store unique elemets
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(8);
    s.insert(5); // duplicate element will not be added
    s.insert(4);

    int target = 3;
    if(s.find(target) != s.end()){ // find() function returns an iterator to the element if found, otherwise it returns s.end()
        // means taregt mil gya hai set me or vo last element ke barabr nhi hai
        cout<<"Target "<<target<<" found in the set."<<endl;
    } else {
        cout<<"Target "<<target<<" not found in the set."<<endl;
    }

     target = 10;
    if(s.find(target) != s.end()){
        cout<<"Target "<<target<<" found in the set."<<endl;   
}
 else {
        cout<<"Target "<<target<<" not found in the set."<<endl;
    }
}