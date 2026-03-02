// pointers : variable used to store address of the variable
// pointer-datatype *pointer ka nam
// address pr konsi value store hai   -> * ko yad kro
#include<iostream>
using namespace std;
int  main(){
    int x = 4;
    int *ptr = &x;
    cout<<&x<<endl; //  x ka address
    cout<<ptr<<endl; // x ka address store hai
    cout<<*ptr<<endl; // address pr jo value store hai : 4

    float y = 9.8;
    float *str = &y;
    cout<<&y<<endl; //  y ka address
    cout<<str<<endl; // y ka address store hai
    cout<<*str<<endl; // 9.8

}