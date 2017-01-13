/*

Intent
------------
Attach additional responsibilities to an object dynamically. Decorators provide a flexible alternative to subclassing for extending functionality. [GoF, p175]
Client-specified embellishment of a core object by recursively wrapping it.
Wrapping a gift, putting it in a box, and wrapping the box.


Requirement
----------

One common interface, Interface
one core class , which inherits from interface
one decorator class, which inherits from interface + creates a Interface member inside (composition of interface )
Defined each decorator derived class from decorator class.
Decorator derived classes implement their wrapper functionality - and - delegate to the Decorator base class.
The client configures the type and ordering of Core and Decorator objects.


Examples
-----------
The Decorator attaches additional responsibilities to an object dynamically. The ornaments that are added to pine or fir trees are examples of Decorators. Lights, garland, 
candy canes, glass ornaments, etc., can be added to a tree to give it a festive look. The ornaments do not change the tree itself which is recognizable as a Christmas tree 
regardless of particular ornaments used. As an example of additional functionality, the addition of lights allows one to "light up" a Christmas tree. 
[Michael Duell, "Non-software examples of software design patterns", Object Magazine, Jul 97, p54]

*/

#include<iostream>

using namespace std;

class IObject
{
public:
    virtual ~IObject() { }
    virtual void draw() = 0;
};


class Window : public IObject
{

public:
   void draw()
   {
       cout << "drawn this Window" << endl;
   }
};


class Decorator : public IObject
{
protected:
   Decorator(IObject *o): wrappee(o) { }
   ~Decorator() 
   { 
       delete wrappee; 
   }
public:
   void draw()
   {
       wrappee->draw();
   }
private:
   IObject* wrappee;
};

class BorderDecorator : public Decorator
{
public:
    BorderDecorator(IObject *obj) : Decorator(obj) { }
    void draw()
    {
        cout << "Border Decorator ";
        Decorator::draw();
    }
};


class MarginDecorator : public Decorator
{
public:
    MarginDecorator(IObject *obj) : Decorator(obj) { }
    void draw()
    {
        cout << "Margin Decorator ";
        Decorator::draw();
    }
};

int main()
{
  
   IObject *win_m = new MarginDecorator(new Window());
   win_m->draw();

   IObject *win_b = new BorderDecorator(new Window());
   win_b->draw();
 
   IObject *win_bm = new BorderDecorator(new MarginDecorator(new Window()));
   win_bm->draw();

   IObject *win_mb = new MarginDecorator(new BorderDecorator(new Window()));
   win_mb->draw();
   
}
   

