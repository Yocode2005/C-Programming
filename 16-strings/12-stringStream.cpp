#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
   string str = "yogesh is an engineering student";
   stringstream ss(str); // string ko word by word access krega
   string temp;
   while(ss>>temp){ // menas ss se temp me input le lo
    cout<<temp<<endl;
   }
}