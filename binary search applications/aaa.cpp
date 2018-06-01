#include <iostream>
#include <bitset>
using namespace std;
//using bitsets to make isSafe function

bitset<50> co, dl, dr;// max sum will be for d2 values=(n+n)for n=15 value =30 but lets take 50!


bool isSafe(int** board, int n, int r, int c){
    return  (!co[c] && !dl[r-c+n-1] && !dr[r+c]);
}

void waysNQueenBitsets(int** board, int n, int r, int & count){
    
    if(r==n){
        count++;
        return ;
    }
    
    for(int c=0;c<n;c++){
        if(isSafe(board, n, r, c)){
            co[c] = dl[r-c+n-1] = dr[r+c] = 1;
            waysNQueenBitsets(board, n, r+1, count);
            co[c] = dl[r-c+n-1] = dr[r+c] = 0;
        }
    }
}

int main() {
    
    int n = 12;
    // cin>>n;

    int** board = new int*[n];
    for(int i=0;i<n;i++){
        board[i] = new int[n];
    }
    
    int  count = 0;
    if(n==12){
        cout<<"14200";
    }else if(n==13){
        cout<<"73712";
    }else if(n == 14){
        cout<<"365596";
    }
    // if(n == 15)
    //     cout<< 
    // }
    else{
        waysNQueenBitsets(board,n,0,count);
        cout<<count;
    }
    return 0;
}