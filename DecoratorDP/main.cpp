#include<iostream>
#include "./BasePizza/basePizza.h"
#include "./BasePizza/margherita.h"
#include "./Toppings/cheese.h"
#include "./Toppings/mushrooms.h"
#include "./Toppings/jalapeno.h"

using namespace std;

int main(){
    BasePizza* basepizza = new Cheese(new Mushroom(new Jalapeno(new Margherita())));
    int cost = basepizza->cost();
    cout<<"Please pay the bill of you pizza cost: "<<cost+(0.18*cost);
}