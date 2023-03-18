#include "./shapeFactory.h"

int main(){
    ShapeFactory shapeFactory;
    shapeFactory.getShape(shapeFactory.rectangle)->draw();
    shapeFactory.getShape(shapeFactory.circle)->draw();
    shapeFactory.getShape(shapeFactory.triangle)->draw();
}