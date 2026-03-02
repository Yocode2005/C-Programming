// 5 ke alternative digits ka sum 
// 1-2+3-4+5 =3
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int sum = 0;
    // for(int i=1;i<=n;i++){
    //     if(i%2!=0) sum +=i;
    //     else sum -= i;
    // }
    if(n%2==0) sum = -n/2; // for even value  only
    else sum = -n/2 + n; // for odd value only
    cout<<sum;
}