#ifndef SHAPE_H
#define SHAPE_H
class Shape{
    public:
    virtual void draw()=0;
};
#endif //SHAPE_H

#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle : public Shape{
    public:
    virtual void draw();
};
#endif //RECTANGLE_H

#ifndef CIRCLE_H
#define CIRCLE_H
class Circle : public Shape{
    public:
    virtual void draw();
};
#endif //CIRCLE_H

#ifndef TRIANGLE_H
#define TRIANGLE_H
class Triangle : public Shape{
    public:
    virtual void draw();
};
#endif //TRIANGLE_H