// note : jb bhi function me array ko pass krte hai hm array ko nhi bkli usak address/1st elemnet ka address pass krte hai

#include<iostream>
using namespace std;
void displayArray(int str[]){
    for(int i=0;i<=4;i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[]){
    b[0] = 100;
}
int main(){
    int arr[] = {1,2,3,4,5};
    displayArray(arr);
    change(arr);
    displayArray(arr);
}