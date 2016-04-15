//
// Created by iqnect on 4/15/16.
//

#include "../include/Singleton.h"

class Singleton
{
private:
    Singleton(){}
    Singleton(Singleton&){}
    Singleton&operator=(Singleton &){}

public:
    static Singleton* get_instance()
    {
        static Singleton *instance;

        if(instance == nullptr)
        {
            if(instance == nullptr)
            {
                instance  = new Singleton();
            }
        }
        return  instance;
    }
};


Singleton* get_singleton_instance()
{
    Singleton *obj = Singleton::get_instance();
    return obj;
}