#include<iostream>
#include "./game.h"
#include "../PlayerType/playerType.h"
#include "../Board/board.h"
#include "../Player/player.h"
#include <vector>
#include<string>

using namespace std;


Game::Game(int boardSize,int numPlayers): Board(boardSize){
    this->nplayers = numPlayers;
    this->players = vector<Player>(numPlayers);
    this->setPlayersDetails();
}

void Game::setPlayersDetails(){
    for(int i = 1;i<=nplayers;i++){
        cout<<"Enter Player "<<i<<" name and symbol: ";
        string name;
        playerType type;
        char ptype;

        cin>>name;
        cin>>ptype;

        switch(ptype){
            case 'x':
                type = x;
                break;
            case 'o':
                type = o;
                break;
            default:
                cout<<"type is not defined\n";
        }

        players[i-1] = Player(name,type);
    }
    this->startGame();
}

void Game::startGame(){
    int isWin = 0, total = gridSize*gridSize;
    cout<<"To Play please enter position(row,col) detail in grid between 0 to "<<this->gridSize-1<<endl;
    this->displayBoard();
    while(isWin<total){
        for(int i = 0;i<this->nplayers;){
            cout<<this->players[i].name<<" turn: ";
            int row,col;
            cin>>row>>col;
            if(row>=0 && row<this->gridSize && col>=0 && col<this->gridSize && this->grid[row][col]==0){
                this->grid[row][col]=this->players[i].type;
                isWin++;
            }
            else {
                cout<<"Invalid position! Try Again\n";
                continue;
            }
            this->displayBoard();
            if(this->checkWin()){
                cout<<"Player "<<this->players[i].name<<" Win";
                return;
            }
            i++;
        }
    }
    cout<<"Match Draw YAYYYYYYYYYY!!!!!!!";
}