#include "../include/buttons.h"


WindowsButton :: WindowsButton(string _name)
{
    name = _name;
}

void WindowsButton :: paint()
{
    cout<<name<<" : Windows button is painted"<<endl;
}

LinuxButton :: LinuxButton(string _name)
{
    name = _name;
}

void LinuxButton :: paint()
{
    cout<<name<<" : Linux button is painted"<<endl;
}

Button* WindowsButtonFactory :: create(string name)
{
    return new WindowsButton(name);
}

Button* LinuxButtonFactory :: create(string name)
{
    return new LinuxButton(name);
}
