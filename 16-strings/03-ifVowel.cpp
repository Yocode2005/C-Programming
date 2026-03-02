#include<iostream>
using namespace std;
int main(){
    string s = "yogesh";
    int count = 0;
    int i = 0;
    while(s[i]!='\0'){
        if(s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'e'){
            count++;
        }
        i++;
    }
    cout<<count;
}