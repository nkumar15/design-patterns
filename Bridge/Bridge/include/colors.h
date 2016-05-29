#ifndef COLORS_H_INCLUDED
#define COLORS_H_INCLUDED
#include <iostream>


using namespace std;


class Color
{
public:
    virtual void paint() = 0;
};

class RedColor : public Color
{
public:
    virtual void paint() override;

};

class BlueColor : public Color
{
public:
    virtual void paint() override;
};



#endif // COLORS_H_INCLUDED
