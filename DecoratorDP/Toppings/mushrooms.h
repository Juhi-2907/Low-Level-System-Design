#ifndef MUSHROOM_H
#define MUSHROOM_H

#include "../BasePizza/basePizza.h"

class Mushroom : public BasePizza{
 BasePizza* basePizza;
 public:
 Mushroom(BasePizza* ptr);
 int cost();
};
#endif //MUSHROOM_H