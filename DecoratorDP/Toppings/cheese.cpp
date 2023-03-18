#include "../BasePizza/basePizza.h"
#include "./cheese.h"

Cheese::Cheese(BasePizza* ptr){
    basePizza=ptr;
}

int Cheese::cost(){
    return basePizza->cost()+20;
}