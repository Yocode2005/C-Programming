#include<iostream>
using namespace std;
int main(){
    cout<<"enter the marks : ";
    int n;
    cin>>n;
    // if(n>=91 && n<=100){
    //     cout<<"excellent";
    // }
    // if(n>=81 && n<=90){
    //     cout<<"very good";
    // }
    // if(n>=71 && n<=80){
    //     cout<<"good";
    // }
    // if(n>=61 && n<=70){
    //     cout<<"can do better";

    // }
    // if(n>=51 && n<=60){
    //     cout<<"average";

    // }
    // if(n>=40 && n<=50){
    //     cout<<"below average";

    // }
    // if(n<40){
    //     cout<<"fail";
    // }
    // if(n>=91){ // dusra trika
    //     cout<<"excellent";
    // }
    // else{
    //     if(n>=81){
    //       cout<<"very good";  
    //     }
    //     else{
    //         if(n>=71){
    //             cout<<"good";
    //         }
    //         else{
    //             if(n>=61){
    //                 cout<<"can do better";
    //             }
    //             else{
    //                 if(n>=51){
    //                     cout<<"average";
    //                 }
    //                 else{
    //                     if(n>=41){
    //                         cout<<"below average";
    //                     }
    //                     else{
    //                         cout<<"fail";

    //                     }
                        
    //                 }
    //             }
    //         }
    //     }
    // }
    if(n>=91){
        cout<<"excellent";
    }
    else if(n>=81){ // else if wali condition jb jb usse uper wali condition fail ho jay gi
        cout<<"very good";
    }
    else if(n>=71){
        cout<<"good";
    }
    else if(n>=61){
        cout<<"can do better";
    }
    else if(n>=51){
        cout<<"average";
    }
    else if (n>=41){
        cout<<"below average";
    }
    else{
        cout<<"fail";
    }
    


}