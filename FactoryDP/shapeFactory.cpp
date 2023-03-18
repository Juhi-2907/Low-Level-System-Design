#include "./shapeFactory.h"
#include "./shape.h"
#include<string>

using namespace std;

Shape* ShapeFactory::getShape(shapeCode shape){
    switch(shape){
        case rectangle:
            return new Rectangle();
        case circle:
            return new Circle();
        case triangle:
            return new Triangle();
        default:
            return NULL;
    }
}