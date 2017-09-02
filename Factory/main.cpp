#include <iostream>
#include "shapefactory.h"

using namespace std;

void create_shape_from_factory();

void create_shape_from_factory()
{
    ShapeFactory factory;
    auto shape_ptr = factory.create_shape(shape_types::Circle);
    shape_ptr->draw();

    shape_ptr = factory.create_shape(shape_types::Square);
    shape_ptr->draw();
}

int main()
{
    create_shape_from_factory();
    return 0;
}
