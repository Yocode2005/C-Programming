#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the rows of  matrix : ";
    cin>>m;
    int n;
    cout<<"enter the column of  matrix : ";
    cin>>n;
    int arr[m][n];
     for(int i = 0;i<m;i++){ // for rows
            for(int j =0;j<n;j++){ // for columns
                cin>>arr[i][j];
            }
        }
        cout<<endl;
        // wave print 
        for(int i = 0;i<m;i++){
            if(i%2==0){
                for(int j  = 0;j<n;j++){
                    cout<<arr[i][j]<<" ";
                }
            }
            else{
                for(int j = n-1;j>=0;j--){
                    cout<<arr[i][j]<<" ";
                }
            }
            cout<<endl;
        }
}