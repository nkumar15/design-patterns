#ifndef SHAPEFACTORY_H_INCLUDED
#define SHAPEFACTORY_H_INCLUDED

#include <iostream>
using namespace std;

enum class shape_types{
    Circle,
    Square
};

class Shape{
public:
    virtual void draw() = 0;
};

class Circle: public Shape{
public:
    Circle(){}
    void draw();
};

class Square: public Shape{
public:
    Square(){}
    void draw();
};

class ShapeFactory{
public:
    Shape * create_shape(shape_types type);
};

void create_shape_from_factory();

#endif // SHAPEFACTORY_H_INCLUDED
