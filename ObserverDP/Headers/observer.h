#include <string>

using namespace std;

#ifndef OBSERVER_H
#define OBSERVER_H
class Observer{
    int userId;
    public:
    Observer(int id);
    void update(string message);
};
#endif