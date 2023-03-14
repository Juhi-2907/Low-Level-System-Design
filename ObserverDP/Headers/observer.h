#ifndef OBSERVER_H
#define OBSERVER_H
#include <string>

using namespace std;

class Observer{
    int userId;
    public:
    Observer();
    Observer(int id);
    void update(string message);
};
#endif //OBSERVER_H