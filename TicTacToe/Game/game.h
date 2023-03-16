#ifndef GAME_H
#define GAME_H

#include "../PlayerType/playerType.h"
#include "../Board/board.h"
#include "../Player/player.h"
#include <vector>

using namespace std;

class Game: private Board{
    int nplayers;
    vector<Player> players;
    void setPlayersDetails();
    void startGame();
    public:
        Game(int boardSize,int numPlayers);
};
#endif //GAME_H