#ifndef BOARD_H
#define BOARD_H

#include "../PlayerType/playerType.h"
#include <vector>

using namespace std;

class Board{
    public:
    int gridSize;
    vector<vector<playerType> > grid;
    Board(int size);
    void displayBoard();
    bool checkWin();

};
#endif //BOARD_H