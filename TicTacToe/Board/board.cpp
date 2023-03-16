#include <iostream>
#include "board.h"
#include "../PlayerType/playerType.h"
#include <vector>

using namespace std;

Board::Board(int size){
    this->gridSize = size;
    this->grid = vector<vector<playerType> >(this->gridSize,vector<playerType>(this->gridSize));
}

void Board::displayBoard(){
    for(int i = 0;i<gridSize;i++){
        for(int j = 0;j<gridSize;j++){
            if(grid[i][j]==0)
                cout<<" ";
            else
                cout<<char(grid[i][j]);
            if(j!= gridSize-1){
                cout<<" | ";
            }
        }
        cout<<endl;
        if(i!= gridSize-1)
         for(int k = 0;k<gridSize;k++){
            cout<<"-";
            if(k!= gridSize-1){
                cout<<" + ";
            }
         }
        cout<<endl;
    }
}

bool Board::checkWin(){
    for(int i = 0; i<gridSize;i++){
        bool isrow = true, iscol = true;
        for(int j = 1;j<gridSize;j++){
            if(grid[i][j]==0 || grid[i][j]!=grid[i][j-1]){
                isrow=false;
                break;
            }
        }
        if(isrow){
            return true;
        }
        for(int j = 1;j<gridSize;j++){
            if(grid[j][i]==0 || grid[j][i]!=grid[j-1][i]){
                iscol=false;
                break;
            }
        }
        if(iscol){
            return true;
        }
    }
    bool isdiag1 = true, isdiag2 = true;
    for(int i = 1,j=gridSize-2;i<gridSize &&(isdiag1 || isdiag2);i++,j--){
        if(isdiag1 &&(grid[i][i]==0 || grid[i][i]!=grid[i-1][i-1])){
            isdiag1=false;
        }
        if(isdiag2 &&(grid[j][i]==0 || grid[j][i]!=grid[j+1][i-1])){
            isdiag2=false;
        }
    }
    return isdiag1 || isdiag2;
}