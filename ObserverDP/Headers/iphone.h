#include<vector>
#include "../Headers/observer.h"

using namespace std;

#ifndef IPHONE_H
#define IPHONE_H
class IphoneStock{
    vector<Observer>listObs;
    int numIphone;
    void updateObs();
    public:
    void setStock(int num);
    void addObs(Observer user);
};
#endif