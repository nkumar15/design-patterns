#include <iostream>
#include "include/buttons.h"
#include <memory>


using namespace std;

int main()
{
    {
        WindowsButtonFactory factory;
        unique_ptr<Button> button(factory.create("WindowsButton1"));
        button->paint();
    }

     {
        LinuxButtonFactory factory;
        unique_ptr<Button> button(factory.create("LinuxButton1"));
        button->paint();
    }


    return 0;
}
