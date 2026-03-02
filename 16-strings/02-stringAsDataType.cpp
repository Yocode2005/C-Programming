#include<iostream>
using namespace std;
int main(){
    string str = "yogesh";
    cout<<str<<endl;
    cout<<str[0]<<endl;

    // // esem direct input le skte hai
    // string s;
    // cout<<"enter the text : "; // space allow nhi hai
    // cin>>s; // cin  acche se tabhi work krega jb string me spaces nhi honge
    // cout<<s; // agr space diya to uske bad ka print nhi krega



    // cin jga use kro getline
    string s;
    cout<<"enter the text : ";
    getline(cin,s); // jb bhi with spaces string chaiye ho tb use krna 
    cout<<s;

}