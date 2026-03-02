#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character : ";
    cin>>ch;
    // a to z -> 97 to 122
    // A to Z  -> 65 to 98
    int ascii = (int)ch;
    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
        cout<<"the character is an alphabet";
    }
    else{
        cout<<"the character is not an alphabet";
    }
   
}