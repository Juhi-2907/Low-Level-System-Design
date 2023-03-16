#include<iostream>
#include "./PlayerType/playerType.h"
#include "./Board/board.h"
#include "./Player/player.h"
#include "./Game/game.h"

using namespace std;

int main(){
    int n,s;
    cout<<"Enter the size of board: ";
    cin>>s;
    cout<<"Enter the number of players: "; 
    cin>>n;
    Game game(s,n);
    return 0;
}