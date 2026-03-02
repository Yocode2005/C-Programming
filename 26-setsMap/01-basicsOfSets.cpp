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

    s.erase(3); // to remove an element from the set

    cout<<"Size of the set: "<<s.size()<<endl; // size of the set // 3// duplicate element will not be added

    cout<<"Elements in the set: ";
    // for each loop to print the elements of the set
    for(int x : s){
        cout<<x<<" ";
    }
    cout<<endl;

    
}