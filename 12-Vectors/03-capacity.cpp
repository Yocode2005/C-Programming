#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    //size same hone pr capacity double ho jati hai  
    v.push_back(6);// 1 1
    v.push_back(1);// 2 2
    v.push_back(9);// 3 4
    v.push_back(0);// 4 4
    v.push_back(6);// 5 8
    v.push_back(1);// 6 8
    v.push_back(9);// 7 8
    v.push_back(0);// 8 8
    v.push_back(6);// 9 16
    v.push_back(1);// 10 16
    v.push_back(9);// 11 16
    v.push_back(0);// 12 16
    // size : 12  capacity : 16
    cout<<"size is : "<<v.size()<<endl;
    cout<<"capacity is : "<<v.capacity()<<endl;
    v.pop_back();
     v.pop_back();
      v.pop_back();
       v.pop_back();
        v.pop_back();
         v.pop_back();
          v.pop_back(); 
          v.pop_back();
          cout<<"size is : "<<v.size()<<endl;
    cout<<"capacity is : "<<v.capacity()<<endl;
    // capacity me koi change nhi hoga

}