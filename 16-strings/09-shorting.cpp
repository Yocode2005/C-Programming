#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter the string : ";
    //cin>>s;
    getline(cin,s);
    sort(s.begin(),s.end()); //ASCII values ke order me  sort krke de dega
    cout<<s;

}