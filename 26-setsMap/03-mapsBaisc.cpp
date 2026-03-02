// unordered_set : used to store unique elemets
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
   unordered_map<string,int> m;
   pair<string,int> p1;
   p1.first = "Mango";
   p1.second = 100;
   m.insert(p1);
   cout<<endl;
   pair<string,int> p2;
   p2.first = "Apple";
   p2.second = 200;
   m.insert(p2);
    cout<<endl;

    // another way to insert in map
    m["Banana"] = 50; 
     cout<<endl;

    // for printing the map
    // for(pair<string,int> p : m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // } 
    
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl; // to get the size of map
     cout<<m["Mango"]<<endl; // to access the value of key "Mango"
     cout<<m["Grapes"]<<endl; // if key is not present in map then it will insert the key with value 0
     cout<<m.size()<<endl; // to get the size of map after inserting "Grapes"

   // to erase the element from map
    m.erase("Mango"); 
     cout<<endl;
     
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;

    
}