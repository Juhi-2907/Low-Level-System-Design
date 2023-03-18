#include<string>
#include "./shape.h"

using namespace std;

#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H
class ShapeFactory{
    public:
    enum shapeCode{
        circle,
        rectangle,
        triangle
    };
    Shape* getShape(shapeCode shape);
};
#endif //SHAPEFACTORY_H