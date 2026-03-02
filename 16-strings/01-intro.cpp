#include<iostream>
using namespace std;
int main(){
//     char str[5] = {'a','b','c','d','e'}; // defaultly last me '\0' hota hi hai or uske bad string khtm ho jata hai
//     for(int i =0;str[i]!='\0';i++){
//         cout<<str[i]<<" ";
//     }
// cout<<endl;


    char newStr[] = {'y','o','g','\0','e','s','h'}; // \0 ke bad print nhi krega
    cout<<newStr<<" "<<endl; // y o g


    char str[5] = "abcd";
    for(int i = 0;i<5;i++){
        cout<<str[i]<<" ";
    }


    cout<<str[2]<<endl;
    cout<<str[5]<<endl;
    cout<<(int)(str[5]);

}