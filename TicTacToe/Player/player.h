#ifndef PLAYER
#define PLAYER

#include "../PlayerType/playerType.h"
#include<string>

using namespace std;

class Player{
    public:
    string name;
    playerType type;
    Player();
    Player(string name,playerType type);
    
};
#endif //PLAYER