// note : insan ek bar me ya to ek sidi chdega ya fir do sidi

//          1 1 1 1 1                1 1 1 1                      1 2          
//          1 2 1 1                  2 1 1                        2 1
//          1 1 2 1                  1 2 1                        1 1 1
//          1 1 2                    1 1 2
//          1 2 2                    2 2
//          2 1 2
//          2 2 1
//          2 1 1 1      _                      __                            __
//                    __|5                   __|5                        __|5
//                 __|4                   __|4                        __|4 
//              __|3        =          __|3                        __|3 
//           __|2                   __|2                +       __|2 
//        __|1                   __|1                        __|1
//    __|                     __|                         __| 
//                           yha insan first stair          yha insan sec.stair pr hai  
//                           pr khda hai fir fifth          fir fifth stair tk pauchne ke all
//                           stair tk puchne ke all         possible ways btane hai
//                            possible trike
#include<iostream>
using namespace std;
int stair(int n){
    if(n==2) return 2;
    if(n==1) return 1;
    return stair(n-1) + stair(n-2);
}
int main(){
    cout<<stair(5);
}