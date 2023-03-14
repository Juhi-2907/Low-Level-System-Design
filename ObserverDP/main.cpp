#include<iostream>
#include "./Headers/observer.h"
#include "./Headers/iphone.h"

using namespace std;

int main(){
    IphoneStock iphone12;
    iphone12.addObs(Observer(1));
    iphone12.addObs(Observer(2));
    iphone12.setStock(100);
}
