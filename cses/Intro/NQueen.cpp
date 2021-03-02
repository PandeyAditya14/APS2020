/**
 * @file NQueen.cpp
 * @author Aditya Kumar Pandey (aditya141199@gmail.com)
 * @brief This is Solutios for cses problem Chessboard and Queens
 * @version 0.1
 * @date 2020-06-28
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include<bits/stdc++.h>
#define N 8
using namespace std;

bool isSafe(char board[N][N] , int row , int col){
    if(board[row][col] == '*')
        return false;
    for (int i = 0 ; i<row;i++)
        if(board[i][col] =='Q')
            return false;
    for (int i = row , j =col ; i>=0 && j>=0 ;i-- , j--)
        if(board[i][j] == 'Q')
            return false;
    for (int i = row , j =col ; i>=0 && j<N ;i-- , j++)
        if(board[i][j] == 'Q')
            return false;
    return true;
    }

void NQueen(char board[N][N], int row , int &count){
    if(row == N){
        count++;
        return;
    }
    for(int i = 0; i<N ;i++){
        if(isSafe(board,row,i)){
            board[row][i]='Q';
            NQueen(board,row+1,count);
            board[row][i]='.';
        }
    }
}

int main(){
    int count = 0;
    char board[N][N];
    for(int i =0 ;i<N ; i++)
        cin>>board[i];
    NQueen(board,0,count);
    cout<<count;
    return 0;
}