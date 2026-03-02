#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "123456";
    int x = stoi(str); // string ko integer me convert krne ke kam aata hai
    cout<<x+1<<endl; // 123457

    string anotherstr = "1234567899865";
    long long y = stoll(anotherstr); // jyda bde integers ko store krne ke liye
    cout<<y;
}
