#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter day number : ";
    cin>>x;
    switch(x){
      case 1 :
         cout<<"monday";
         break;
        case 2 :
          cout<<"tuesday";
          break;
      case 3 :
          cout<<"wednesday";
          break;
      case 4 :
          cout<<"thusday";
          break;
     case 5 :
          cout<<"friday";
          break;
     case 6 :
          cout<<"saturday";
          break;
     case 7 :
          cout<<"sunday";
          break;
    default : // enke alava koi or numer lene pr koi statement dikhay esliye  default statement use kiya hai
          cout<<"invalid number";
    }

}