#ifndef SHAPEFACTORY_H_INCLUDED
#define SHAPEFACTORY_H_INCLUDED

#include <memory>

enum class shape_types
{
    Circle,
    Square
};

class Shape
{
  public:
    virtual void draw() = 0;
};

class Circle : public Shape
{
  public:
    Circle() {}
    void draw();
};

class Square : public Shape
{
  public:
    Square() {}
    void draw();
};

class ShapeFactory
{
  public:
    std::shared_ptr<Shape> create_shape(shape_types type);
};

#endif // SHAPEFACTORY_H_INCLUDED
