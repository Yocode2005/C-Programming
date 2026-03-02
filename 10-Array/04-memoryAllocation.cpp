#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<&arr<<endl; // address of an array is adress of ites first element
    cout<<arr<<endl; // ye bhi  phle element ka adress print krega
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;

}