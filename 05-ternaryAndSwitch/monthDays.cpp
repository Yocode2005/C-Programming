#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the month number : ";
    cin>>x;
    switch(x){
        case 1 :
            cout<<"31"; // jan.
            break;
        case 2 :
            cout<<"28"; // feb.
            break;
        case 3 :
            cout<<"31"; // march
            break;
        case 4 :
            cout<<"30"; // april
            break;
        case 5 :
            cout<<"31"; // may
            break;
        case 6 :
            cout<<"30"; // jun
            break;
        case 7 :
            cout<<"31"; // july
            break;
        case 8 :
            cout<<"31"; // aug.
            break;
        case 9 :
            cout<<"30"; // sept.
            break;
        case 10 :
            cout<<"31"; // oct.
            break;
        case 11 :
            cout<<"30"; // nov.
            break;
        case 12 :
            cout<<"31"; // dec.
            break;
        default :
          cout<<"invalid number";

    }
}