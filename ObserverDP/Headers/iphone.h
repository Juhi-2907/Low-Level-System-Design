#ifndef IPHONE_STOCK_H
#define IPHONE_STOCK_H
#include<vector>
#include "observer.h"

using namespace std;

class IphoneStock{
    vector<Observer>listObs;
    int numIphone;
    void updateObs();
    public:
    IphoneStock();
    void setStock(int num);
    void addObs(Observer user);
};
#endif //IPHONE_STOCK_H