#ifndef PRODUCTS_H_INCLUDED
#define PRODUCTS_H_INCLUDED
#include <iostream>

using namespace std;

class Button
{
public:
    virtual void paint() = 0;
protected:
    string name;
};

class WindowsButton : public Button
{
public:
    WindowsButton(string _name);
    void paint() override;
};

class LinuxButton : public Button
{
public:
    LinuxButton(string _name);
    void paint() override;
};

class ButtonFactory
{
public:
    virtual Button* create(string name) = 0;

};

class WindowsButtonFactory : public ButtonFactory
{
public:
    Button* create(string name) override;
};

class LinuxButtonFactory : public ButtonFactory
{
public:
    Button* create(string name) override;
};
#endif // PRODUCTS_H_INCLUDED
