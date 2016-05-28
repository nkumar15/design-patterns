#include "shapefactory.h"

void Circle :: draw(){
    cout<<"Circle drawn"<<endl;
}

void Square :: draw(){
    cout<<"Square drawn";
}

Shape* ShapeFactory :: create_shape(shape_types type){
    if( type == shape_types::Circle )
        return new Circle();
    else if (type == shape_types::Square)
        return new Square();
    else{
        cout << "Invalid type" << endl;
        exit(0);
    }
}

void create_shape_from_factory()
{
    shape_types  type = shape_types::Circle;
    ShapeFactory factory;

    Shape *shape = factory.create_shape(type);
    shape->draw();

    shape  = factory.create_shape(shape_types::Square);
    shape->draw();
}
