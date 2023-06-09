#include<iostream>
#include<vector>
#include "../Headers/iphone.h"
#include "../Headers/observer.h"

using namespace std;

IphoneStock::IphoneStock(): numIphone(0){
}

void IphoneStock::setStock(int num){
    if(numIphone==0){
        updateObs();
    }
    numIphone+=num;
}

void IphoneStock::updateObs(){
    for(int i = 0;i<listObs.size();i++){
        listObs[i].update("Iphone get restocked");
    }
}

void IphoneStock::addObs(Observer user){
    listObs.push_back(user);
}