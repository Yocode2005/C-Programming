#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the rows of 1st matrix : ";
    cin>>m;
    int n;
    cout<<"enter the column of 1st matrix : ";
    cin>>n;

    int p;
    cout<<"enter the rows of 2nd matrix : ";
    cin>>p;
    int q;
    cout<<"enter the column of 2nd matrix : ";
    cin>>q;
    if(n==p){
        int a[m][n];
        cout<<"enter elements of 1st matrix : ";
        for(int i = 0;i<m;i++){ // for rows
            for(int j =0;j<n;j++){ // for columns
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout<<"enter elements of 2nd matrix : ";
        for(int i = 0;i<p;i++){ // for rows
            for(int j =0;j<q;j++){ // for columns
                cin>>b[i][j];
            }
        }
        // resultant matrix
        int res[m][q];
        for(int i  = 0;i<m;i++){
            for(int j = 0;j<q;j++){
                // multiply
                res[i][j] = 0;
                // res[i][j]  = a[i][0]*b[0][j] + a[i][1]*b[1][j] + ......
                for(int k = 0;k<p;k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        cout<<endl;
        // print 
        for(int i  = 0;i<m;i++){
            for(int j = 0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{ // n!=p
        cout<<"the matrix cannot be mulitiplied";
    }
}