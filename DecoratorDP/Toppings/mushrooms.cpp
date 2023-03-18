#include "../BasePizza/basePizza.h"
#include "./mushrooms.h"

Mushroom::Mushroom(BasePizza* ptr){
    basePizza=ptr;
}

int Mushroom::cost(){
    return basePizza->cost()+25;
}