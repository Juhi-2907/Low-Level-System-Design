#include<iostream>
#include "Headers/observer.h"
#include "Headers/iphone.h"

using namespace std;

int main(){
    IphoneStock iphone12;
    Observer user1(1);
    Observer user2(2);
    iphone12.addObs(user1);
    iphone12.addObs(user2);
    iphone12.setStock(100);
}
