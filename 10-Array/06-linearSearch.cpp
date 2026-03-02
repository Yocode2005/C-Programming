// linear search
#include<iostream>
using namespace std;
int main(){
        int n; // for size of array
        cout<<"enter the size of an array : ";
        cin>>n;
        int arr[n];
        // for input of an array
        for(int i = 0;i<=n-1;i++){
            cin>>arr[i];
        }
        // element that you want to check
        int x;
        cout<<"enter the element you want to search : ";
        cin>>x;
        // for search
        // check mark
        bool flag = false; //  false = not present
        for(int i = 0;i<=n-1;i++){
            if(arr[i] == x){
                flag = true;
            }
            if(flag = true) cout<<"element is present in the array"<<endl;
            else cout<<"element is not found"<<endl;
           
        }
                


}