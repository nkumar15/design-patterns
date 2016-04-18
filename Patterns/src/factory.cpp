//
// Created by iqnect on 4/15/16.

#include "../include/factory.h"
#include <iostream>

using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
};

class Circle: public Shape
{
public:
    Circle(){}
    void draw(){
        cout<<"Circle drawn"<<endl;
    }
};

class Square:public  Shape
{
public:
    Square(){}
    void draw(){
        cout<<"Square drawn";
    }
};

class ShapeFactory
{
public:
    Shape * create_shape(shape_types type){
        if( type == shape_types::Circle )
            return new Circle();
        else if (type == shape_types::Square)
            return new Square();
        else {
            cout << "Invalid type" << endl;
            return nullptr;
        }

    }
};

void create_shape_from_factory()
{
    shape_types  type = shape_types::Circle;
    ShapeFactory factory;
    Shape *shape = factory.create_shape(type);
    shape->draw();

}