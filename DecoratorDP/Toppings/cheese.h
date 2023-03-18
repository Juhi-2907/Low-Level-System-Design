#ifndef CHEESE_H
#define CHEESE_H
#include "../BasePizza/basePizza.h"

class Cheese : public BasePizza{
     BasePizza* basePizza;
 public:
 Cheese(BasePizza* ptr);
 int cost();
};
#endif //CHEESE_H