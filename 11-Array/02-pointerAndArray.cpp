// note : agr pointer ko array ka address de diya jay to pointer or aaray same behave krte hai ,, usse pointer se pure array ko use kr skte hai

#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,3,6,1,7};
    int *ptr = arr; // means array ke first element ka address ptr me store kra liya hai
    // int *ptr = &arr   ab ye glt hai because array ke first element ka address pass krna hota hai
    cout<<ptr<<endl;
    cout<<ptr[0];
}