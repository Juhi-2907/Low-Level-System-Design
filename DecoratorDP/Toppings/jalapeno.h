#ifndef JALAPENO_H
#define JALAPENO_H

#include "../BasePizza/basePizza.h"

class Jalapeno : public BasePizza{
    BasePizza* basePizza;
 public:
 Jalapeno(BasePizza* ptr);
 int cost();
};
#endif //JALAPENO_H