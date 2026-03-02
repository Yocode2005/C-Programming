// note : agr right chle gye to left nhi ja skte or agr down chle gye to uper nhi ja skte
// hint : ek bar assume kro ki vo right gya fir all possible ways nicalo destination tk puchne ke or dusri bar assume kro ki down gya fir uske hisab se all possible ways nikalo or last me dono ko jo do

#include<iostream>
using namespace std;
// to print number of possible ways
int maze(int sr,int sc,int er, int ec){ // sr = starting row, sc = starting col. , er = ending row, ec = ending column
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWay = maze(sr,sc+1,er,ec);
    int downWay = maze(sr+1,sc,er,ec);
    int totalWay = rightWay + downWay;
    return totalWay;
}

// to print number of possible ways using two paramters only

//int maze2(int row,int col){
//     if(row<1 || col<1) return 0;
//     if(row==1 && col==1) return 1;
//     int rightWay = maze2(row,col-1);
//     int downWay = maze2(row-1,col);
//     int totalWay = rightWay + downWay;
//     return totalWay;
// }

// to print paths

    // void printPath(int sr,int sc,int er, int ec, string s){
    //     if(sr>er || sc>ec) return ;
    // if(sr==er && sc==ec) { // destination reached
    //     cout<<s<<endl;
    //     return;
    // }
    //  printPath(sr,sc+1,er,ec,s+'R'); // right
    //  printPath(sr+1,sc,er,ec,s+'D'); // down
    // return ;
    // }

int main(){
    cout<<maze(1,1,2,3);// 3 ways // RRD,RDR,DRR
    //cout<<maze2(2,3);
    //printPath(1,1,2,3,"");

}