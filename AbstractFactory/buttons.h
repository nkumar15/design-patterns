#ifndef PRODUCTS_H_INCLUDED
#define PRODUCTS_H_INCLUDED

#include <memory>
using namespace std;

class Button
{
public:
  virtual void paint() = 0;

protected:
  string _name;
};

class WindowsButton : public Button
{
public:
  WindowsButton(string name);
  void paint() override;
};

class LinuxButton : public Button
{
public:
  LinuxButton(string name);
  void paint() override;
};

class ButtonFactory
{
public:
  virtual shared_ptr<Button> create(string name) = 0;
};

class WindowsButtonFactory : public ButtonFactory
{
public:
  shared_ptr<Button> create(string name) override;
};

class LinuxButtonFactory : public ButtonFactory
{
public:
  shared_ptr<Button> create(string name) override;
};
#endif // PRODUCTS_H_INCLUDED
