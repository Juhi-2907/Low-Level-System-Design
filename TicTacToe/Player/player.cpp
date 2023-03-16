#include "./player.h"
#include "../PlayerType/playerType.h"
#include<string>

using namespace std;
Player::Player(){}

Player::Player(string name, playerType type){
    this->name = name;
    this->type = type;
}