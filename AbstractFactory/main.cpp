#include <iostream>
#include <memory>

#include "buttons.h"

using namespace std;

int main()
{
    WindowsButtonFactory win_factory;
    auto win_button = win_factory.create("WindowsButton1");
    win_button->paint();

    LinuxButtonFactory lx_factory;
    auto lx_button(lx_factory.create("LinuxButton1"));
    lx_button->paint();

    return 0;
}
