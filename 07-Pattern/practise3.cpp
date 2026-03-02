// * * * * * *
// *         *
// *         *
// * * * * * *
#include<iostream>
using namespace std;
int  main (){
    // int n = 6;
    // for(int  i = 1;i<=n;i++){
    //     cout<<"*"<<" ";
    // }
    // // for stars
    // for(int i = 1;i<=n-1;i++){
    //     if(i%2==0){
    //         cout<<"*";
    //         // for spaces
    //         for(int j=1;j<=n-2;j++){
    //             cout<<" "<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     else{
    //         cout<<endl;
    //     }
    // }
    
    // for(int  i = 1;i<=n;i++){
    //     cout<<"*"<<" ";
    // }

     int m, n; 
cout<<"enter the number of rows : ";
cin>>m;
cout<<"enter the number of columns : ";
cin>>n;

for(int i = 0; i < m; ++i) { 
for(int j = 0; j < n; ++j) { 
if(i == 0 || j == 0 || i == m-1 || j == n-1) { 
cout << "* "; 
} else { 
cout << " "<<" "; 
} 
} 
cout << endl; 
} 
return 0;
}
