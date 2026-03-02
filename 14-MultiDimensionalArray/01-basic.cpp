// declaration : 
// int arr[size of row][size of column]
// column ka size dena jaruri hai


// intilization : 
// int arr[4][2] = {{1234,56},{1256,43},{1434,32},{1312.96}};
//int arr[4][2] = {1234,56,1256,43,1434,32,1312,96};
//int arr[2][3] = {12,34,56,78,91,23};
// int arr[][3] = {12,34,56,78,91,23};



#include<iostream>
using namespace std;
int main(){
    int arr[3][3]; // declaration
    // rows : 3  --> 0-2
    // columns : 3 --> 0-2
    int str[][3] = {1,2,3,4,5,6,7,8,9};
    cout<<str[1][2]<<endl; // 6


    int str1[3][3] = {1,2,3,4,5,6,7,8,9};
    for(int i = 0;i<=2;i++){ // for number of rows
        for(int j = 0;j<=2;j++){ // for number of columns
            cout<<str1[i][j]<<" ";
        }
        cout<<endl;
    }
    
   
}