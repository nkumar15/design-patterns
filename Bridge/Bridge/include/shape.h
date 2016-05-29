#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED
#include "colors.h"

class Shape
{
protected:
    Color *color;
public:
    Shape(Color *clr);
    virtual void draw() = 0;
};

class Circle : public Shape
{
public:
    Circle(Color *clr);
    virtual void draw() override;
};

class Rectangle : public Shape
{
public:
    Rectangle(Color *clr);
    virtual void draw() override;
};

#endif // SHAPE_H_INCLUDED
