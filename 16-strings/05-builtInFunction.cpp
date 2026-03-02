// leetcode : 151
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // 1) length() : used to find the length ko string // null character ko count krta hai // only count characters and spaces which is actually used
    string str = "yogesh kumar meena ";
    cout<<str.length()<<endl;

    // 2) push_back() : last me character add krna ho
    string newStr = "abc";
    cout<<newStr<<endl;
    newStr.push_back('d');
    newStr.push_back('e');
    newStr.push_back('f');
    cout<<newStr<<endl;

    // 3) pop_back() : last se koi character htna ho
    string anotherstr = "hitesh";
    anotherstr.pop_back();
    cout<<anotherstr<<endl; // hites

    // 4) + operator : strings ko  jodne ka kam   krta hai // character or strings ko aps me jod skyte hai
    string otherStr = "sunil";
    otherStr = otherStr + "123";
    cout<<otherStr<<endl;


    // 5) reverse() : string ko reverse krne ke liye
    string s = "12345";
   reverse(s.begin(),s.end()); // puri string ko hi reverse krna ho
   cout<<s<<endl;
   string p = "12345";
   reverse(p.begin()+2,p.end()-1); // 3 se lekr 4 tk revrese krna ho
   cout<<p<<endl;

   //6) substr() : jb bhi koi string ke uska koi  contineous part nikal na ho
string r = "abcdef";
cout<<r.substr(2);  //index 2 ke aage ka sara 
cout<<endl;
cout<<r.substr(1,3); // bcd
cout<<endl;

// 7) to_string() : integer ko  string me convert krna ho 
int x = 8107960741;
string number = to_string(x);
cout<<number<<endl;



}

