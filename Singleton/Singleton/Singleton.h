#ifndef SINGLETON_H_INCLUDED
#define SINGLETON_H_INCLUDED

#include<iostream>

using namespace std;

class Singleton
{
public:

    /* a non static function is made as static function for this class
       coz a static function is not accessible outside its file.
       static function which will return reference to object */
    static Singleton& get_instance();

    /* member function */
    void increment();
    void decrement();
    void show();


    /* Non copyable and non constructor copyable */
    /* Delete the default implementation of copy constructor and assignment operator */
    /* Alternatively C++03 standard, we can provide empty definition in private mode */
    Singleton(Singleton&) = delete;
    Singleton& operator=(Singleton&) = delete;

    /* Delete the default implementation of move constructor and move assignment operator */
    Singleton(Singleton &&) = delete;
    Singleton& operator=(Singleton &&) = delete;

private:
    int counter;

    /* Default constructor should be private so that object cannot be instantiated outside
    by any external function */
    Singleton();
};

/* This will act as wrapper for underlying static function of singleton class */
/* consider it as mediator to outside world */
Singleton& get_singleton_instance();

#endif // SINGLETON_H_INCLUDED
