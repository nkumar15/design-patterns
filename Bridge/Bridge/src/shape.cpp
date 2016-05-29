#include "../include/shape.h"


Shape :: Shape(Color *clr) : color(clr)
{
}

Circle :: Circle(Color *clr) : Shape(clr)
{

}


Rectangle :: Rectangle(Color *clr) : Shape(clr)
{

}


void Circle :: draw()
{
    cout<<"Circle is drawn with ";
    color->paint();
}

void Rectangle :: draw()
{
    cout<<"Rectangle is drawn with ";
    color->paint();
}

