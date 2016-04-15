//
// Created by iqnect on 4/15/16.
//

#ifndef DESIGNPATTERNS_SINGLETON_H
#define DESIGNPATTERNS_SINGLETON_H

#include <mutex>

using namespace std;
/*class Singleton
{
private:
    static Singleton *instance;
    Singleton(){}

public:
    static Singleton* get_instance();
    /*{
        if(instance == nullptr)
            instance  = new Singleton();

        return  instance;
    }
};*/

class Singleton;

Singleton* get_singleton_instance();



#endif //DESIGNPATTERNS_SINGLETON_H
