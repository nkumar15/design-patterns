#include <iostream>
#include "include/shape.h"

using namespace std;

int main()
{
    Color *red = new RedColor();
    Color *blue = new BlueColor();


    Shape *rect1 = new Rectangle(red);
    Shape *rect2 = new Rectangle(blue);

    rect1->draw();
    rect2->draw();

    Shape *circle1 = new Circle(red);
    Shape *circle2 = new Circle(blue);

    circle1->draw();
    circle2->draw();


    return 0;
}
