#include<iostream>
#include<vector>
#include "../Headers/iphone.h"
#include "../Headers/observer.h"

using namespace std;

void IphoneStock::setStock(int num){
    if(numIphone==0){
        updateObs();
    }
    numIphone+=num;
}

void IphoneStock::updateObs(){
    for(auto user:listObs){
        user.update("Iphone get restocked");
    }
}

void IphoneStock::addObs(Observer user){
    listObs.push_back(user);
}