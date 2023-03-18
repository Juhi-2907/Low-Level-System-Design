#include "../BasePizza/basePizza.h"
#include "./jalapeno.h"

Jalapeno::Jalapeno(BasePizza* ptr){
    basePizza=ptr;
}

int Jalapeno::cost(){
    return basePizza->cost()+15;
}