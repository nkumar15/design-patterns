#include "buttons.h"
#include <iostream>

using namespace std;

WindowsButton::WindowsButton(string name)
{
    _name = name;
}

void WindowsButton::paint()
{
    cout << _name << " : Windows button is painted" << endl;
}

LinuxButton::LinuxButton(string name)
{
    _name = name;
}

void LinuxButton::paint()
{
    cout << _name << " : Linux button is painted" << endl;
}

shared_ptr<Button> WindowsButtonFactory::create(string name)
{
    return make_shared<WindowsButton>(name);
}

shared_ptr<Button> LinuxButtonFactory::create(string name)
{
    return make_shared<LinuxButton>(name);
}
