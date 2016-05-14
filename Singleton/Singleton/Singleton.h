#ifndef SINGLETON_H_INCLUDED
#define SINGLETON_H_INCLUDED

#include<iostream>

using namespace std;

class Singleton
{
public:
    /* Why static function is required? */
    /* Will put detail soon */
    static Singleton* get_instance();

    void increment();
    void decrement();
    void show();
    
        
    /* Delete the default implementation of copy constructor and assignment operator */
    /* Alternatively ++03 standard, we can provide empty definition in private mode */
    Singleton(Singleton&) = delete;
    Singleton& operator=(Singleton&) = delete;
    
    /* Delete the default implementation of move constructor and move assignment operator */
    Singleton(Singleton &&) = delete;
    Singleton& operator=(Singleton &&) = delete;

private:
    int counter;

    /* Default constructor should be private so that it cannot be instantiated outside 
    by any external function */
    Singleton();

    
};


Singleton* get_singleton_instance();

#endif // SINGLETON_H_INCLUDED
