#include "shapefactory.h"
#include <iostream>

void Circle::draw()
{
    std::cout << "Circle drawn" << std::endl;
}

void Square::draw()
{
    std::cout << "Square drawn" << std::endl;
}

std::shared_ptr<Shape> ShapeFactory::create_shape(shape_types type)
{

    switch (type)
    {
    case shape_types::Circle:
        return std::make_shared<Circle>();
    case shape_types::Square:
        return std::make_shared<Square>();
    default:
        std::cout << "Invalid type" << std::endl;
        exit(0);
    }
}